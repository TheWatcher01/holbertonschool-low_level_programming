#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit integer.
 * @index: The index to set the bit at.
 *
 * Return: If an error occurred - -1.
 *         Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
