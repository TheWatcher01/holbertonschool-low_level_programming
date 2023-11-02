#include "main.h"

/**
 * _isalpha - check if it's a letter
 * @c: char to check
 *
 * Return: 1 if success 0 if not
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
