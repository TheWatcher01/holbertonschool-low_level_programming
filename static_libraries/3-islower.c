#include "main.h"

/**
 * _islower - check if is lowerCase
 * @c: char to check
 *
 * Return: 1 if success 0 if not
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
