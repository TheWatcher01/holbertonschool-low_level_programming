#include "hash_tables.h"

/**
 * shash_table_create - Function that creates a sorted hash table.
 * @size: The size of the new sorted hash table.
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	if (!size)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!ht->array)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Function that adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with the key.
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *tmp_node;
	char *value_copy;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->shead;
	while (tmp_node)
	{
		if (!strcmp(tmp_node->key, key))
		{
			free(tmp_node->value);
			tmp_node->value = value_copy;
			return (1);
		}
		tmp_node = tmp_node->snext;
	}

	new_node = create_new_node(key, value_copy);
	if (!new_node)
	{
		free(value_copy);
		return (0);
	}

	insert_node(ht, new_node, index);

	return (1);
}

/**
 * create_new_node - Function that creates a new node.
 * @key: The key to add to the new node.
 * @value: The value to add to the new node.
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
shash_node_t *create_new_node(const char *key, char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

	if (!new_node)
	{
		free(value);
		return (NULL);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(value);
		free(new_node);
		return (NULL);
	}
	new_node->value = value;
	return (new_node);
}

/**
 * insert_node - Function that inserts a node into a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @new_node: The new node to insert.
 * @index: Index of the array of the sorted hash table to insert into.
 * Return: Nothing.
 */
void insert_node(shash_table_t *ht, shash_node_t *new_node,
				 unsigned long int index)
{
	shash_node_t *tmp_node;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (!ht->shead)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, new_node->key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		tmp_node = ht->shead;
		while (tmp_node->snext != NULL &&
			   strcmp(tmp_node->snext->key, new_node->key) < 0)
			tmp_node = tmp_node->snext;

		new_node->sprev = tmp_node;
		new_node->snext = tmp_node->snext;

		if (tmp_node->snext == NULL)
			ht->stail = new_node;
		else
			tmp_node->snext->sprev = new_node;

		tmp_node->snext = new_node;
	}
}

/**
 * shash_table_get - Retrieves value associated with key in sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with the key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Function that prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 * Return: Nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - That prints sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table.
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Function that deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (!ht)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
