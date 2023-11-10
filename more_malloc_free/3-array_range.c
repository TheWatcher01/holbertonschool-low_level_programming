#include "main.h"

/**
 * *array_range - Function that creates an array of integers.
 * The array contains all values from 'min' (inclusive) to 'max' (inclusive),
 * ordered form min to max.
 *
 * @min: The minimum value (inclusive) that the array should contain.
 * @max: The maximum value (inclusive) that the array should contain.
 *
 * Return: A pointer to newly created array.
 * If min > max, return NULL, as it's not possible to create a valid
 * array in this case.
 * If malloc fails, return NULL, the function also returns NULL.
 *
 */

int *array_range(int min, int max)
{
	int size;
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
