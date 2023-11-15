#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as a parameter
 * on each element of an array.
 * @array: Pointer to the first element of the array to be processed.
 * @size: The number of elements in the array pointed to by 'array'.
 * @action: Pointer to a function that takes an integer as argument and
 * returns nothing. This function will be applied to each element of the array
 *
 * This function iterates over each element of the array 'array', and applies
 * the function 'action' to it. The function 'action' is expected to handle
 * the processing of each individual element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	
	}
}
