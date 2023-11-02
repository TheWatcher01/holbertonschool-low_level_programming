#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: char*
 * @accept: char*
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *c = accept;

		while (*c != '\0')
		{
			if (*s == *c)
			{
				return (s);
			}
			c++;
		}
		s++;
	}

	return ('\0');
}
