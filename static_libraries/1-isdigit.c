#include "main.h"

/**
 * _isdigit - check if digit 0 through 9
 * @c: char to check
 *
 * Return: 1 if is a digit & 0 if not
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
