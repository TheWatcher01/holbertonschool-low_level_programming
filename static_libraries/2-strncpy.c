#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *cp_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (cp_dest);
}
