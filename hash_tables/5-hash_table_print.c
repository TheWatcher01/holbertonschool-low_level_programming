#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table.
 * @ht: Is the hash table pointers you want to print.
 *
 * This function will print each key/value pair in the order they appear
 * in the array of the hash table, separated by a comma.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int flag = 0;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
