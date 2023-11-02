#include "main.h"

/**
 * _strchr - locate caracter in string
 * @s: char
 * @c: char
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
