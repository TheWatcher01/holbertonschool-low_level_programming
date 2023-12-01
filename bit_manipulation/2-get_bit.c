#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The bit integer.
 * @index: The index to get the bit from.
 *
 * Return: If an error occurred - -1.
 *         Otherwise - the value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
