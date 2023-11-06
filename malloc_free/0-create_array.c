#include "main.h"

/**
 * *create_array - function that creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: The size of the array to be created.
 * @c: The caracter to initialize the array with
 *
 * Return: NULL if size = 0 
 * Return a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for ( i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
