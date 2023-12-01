#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index of dlistint_t linked list
 * @head: Double pointer to the head of the list
 * @index: Index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL) /* check if list exists */
		return (-1);

	current = *head;

	if (index == 0) /* delete first node */
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++) /*traverse till node*/
		current = current->next;

	if (current == NULL) /* if node not found */
		return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}

