#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: Head pointers
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *current_node = head;

	while (current_node != NULL)
	{
		list_t *next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
