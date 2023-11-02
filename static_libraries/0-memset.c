#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: char dest_str
 * @b: char src
 * @n: int
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
