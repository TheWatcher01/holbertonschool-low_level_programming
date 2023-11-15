#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer in an array.
 * @array: Pointer to the array to be searched.
 * @size: The number of elements in the array.
 * @cmp: is a pointer to the function to be used to compare values.
 *
 * This function uses the comparison function pointed to by @cmp
 * to find an integer in the array pointed to by @array. The comparison
 * function should return non-zero if the integer is found.
 *
 * Return: The index of the first element for which the cmp function
 * does not return 0. If no element matches or if size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
