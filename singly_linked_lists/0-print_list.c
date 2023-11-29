#include "lists.h"

/**
print_list - Function that prints all the elements of a list_t list.

@h: A pointer to the first node in the list.

Return: The number of elements in the list.

*/

size_t print_list(const list_t *h)
{
	size_t count = 0; /* Elements counter var */

	while (h != NULL) /* Check str is NULL, and prints accordingly */
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}/*If check str in node = NULL = print [0] (nil)*/
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}/*Print str node = NULL else print [len] str*/
		
		h = h->next; /*Goes to the next element in the list*/
		count++; /*Counter increments*/
	}
	return (count);/*returns the number of elements in the list*/
}
