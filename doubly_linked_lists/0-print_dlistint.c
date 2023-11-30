#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 * @h: Pointer to head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
