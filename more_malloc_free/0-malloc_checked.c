#include "main.h"

/**
 * *malloc_checked - Function that allocates memory using malloc.
 *
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory on success.
 * On failure, the process is terminated with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
