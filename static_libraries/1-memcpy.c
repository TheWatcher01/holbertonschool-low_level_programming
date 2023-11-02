#include "main.h"

/**
 * _memcpy - copie memory area
 * @dest: char
 * @src: char
 * @n: unsigned int
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *new_dest = dest;
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		i++;
		src++;
		dest++;
	}

	return (new_dest);
}
