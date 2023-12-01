#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment
 *         of `s` which consist only of bytes from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	char *ptr = accept;

	while (*s)
	{
		for (ptr = accept; *ptr; ptr++)
		{
			if (*s == *ptr)
			{
				bytes++;
				break;
			}

			if (*ptr == '\0')
				return (bytes);
		}
		s++;
	}

	return (bytes);
}

