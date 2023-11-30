#include "lists.h"

/**
 * free_dlistint - Function frees a dlistint_t list.
 * @head: Pointers to the head of the dlistint_t list.
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
