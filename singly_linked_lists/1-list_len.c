#include "lists.h"

/**
 * list_len - Function returns number of elements in a linked list_t list.
 *
 * @h: const list_t*
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0; /*Variable to count the number of elements.*/

	while (h != NULL) /*While *h != NULL = continue*/
	{
		h = h->next; /*Advance to next node in linked list*/
		count++; /*Increments*/
	}
	return (count); /*Return the number of elements in the linked list*/
}
