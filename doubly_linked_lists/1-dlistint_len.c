#include "lists.h"

/**
 * dlistint_len - Function return number of elements in linked dlistint_t list
 * @h: Pointer to the head of double linked list.
 * Return: The number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0; /*n = node_counter*/

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
