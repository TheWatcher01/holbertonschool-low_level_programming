#include "lists.h"
/**
 * get_dnodeint_at_index - Function returns nth node of dlistint_t linked list
 * @head: Pointer to the head of dlistint_t.
 * @index: Is the index of the node, starting from 0.
 * Return: if the node does not exist, return NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	if (head == NULL)
	{
		return (NULL);
	}

	return (head);
}
