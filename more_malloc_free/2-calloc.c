#include "main.h"

/**
 * *_calloc - Function that allocates memory for an array, using malloc.
 * The _calloc function allocates memory for an array of 'nmemb' elements of
 * 'size' bytes each and returns a pointer to the allocated memory.
 *
 * The _calloc function also initializes all of the elements
 * of the array to zero.
 *
 * @nmemb: Numbers of elements (unsigned int) reserved in the memory.
 * @size: The size in bytes of each elements of the array.
 *
 * Return: If 'nmemb' or 'size' is zero, then _calloc returns 'NULL'.
 * If malloc fails, then _calloc returns 'NULL'.
 * Otherwise, _calloc return a pointer to the allocated memory.
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
