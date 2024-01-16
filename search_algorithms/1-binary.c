#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 *
 * This function prints an array of integers, separated by commas.
 */
void print_array(const int *array, size_t size)
{
	/* Variable to keep track of current index for looping through array */
	size_t i;

	/* Print the message "Searching in array:" */
	printf("Searching in array: ");

	/* Loop through each element in the array */
	for (i = 0; i < size; i++)
	{
		/* Print a comma before all elements except the first one */
		if (i > 0)
		{
			printf(", ");
		}
		/* Print the current element */
		printf("%d", array[i]);
	}

	/* Print a newline character */
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Function performs binary search on sorted array of integers to find
 * specific value. It returns the index of the occurrence of value,
 * or -1 if the value is not found or the array is NULL.
 *
 * Return: The index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	/* Variables to keep track of the start, middle, and end indices */
	size_t start, mid, end;

	/* Check if the array is NULL */
	if (!array)
		return (-1);

	/* Initialize the start, middle, and end indices */
	start = 0;
	end = size - 1;

	/* Continue the search as long as the subarray is not empty */
	while (start <= end)
	{
		/* Print the current subarray */
		print_array(array + start, end - start + 1);

		/* Calculate the middle index */
		mid = (start + end) / 2;

		/* If middle element is less than value, search in right subarray */
		if (array[mid] < value)
			start = mid + 1;
		/* If middle element is greater than value, search in left subarray */
		else if (array[mid] > value)
			end = mid ? mid - 1 : mid;
		/* If the middle element is equal to the value, return the index */
		else
			return (mid);
	}

	/* If the value was not found in the array, return -1 */
	return (-1);
}
