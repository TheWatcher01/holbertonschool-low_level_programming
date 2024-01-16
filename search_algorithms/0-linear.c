#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * This function performs a linear search on an array of integers to find a
 * specific value. It returns the index of the first occurrence of the value,
 * or -1 if the value is not found or the array is NULL.
 *
 * Return: The first index where value is located, or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (!array)
		return (-1);

	/* Loop through each element in the array */
	for (i = 0; i < size; i++)
	{
		/* Print the current element being checked */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* If the current element matches the value, return the index */
		if (array[i] == value)
			return (i);
	}

	/* If the value was not found in the array, return -1 */
	return (-1);
}
