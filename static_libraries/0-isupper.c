#include "main.h"

/**
 * _isupper - check if is upperCase
 * @c: char to check
 *
 * Return: 1 if success 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
