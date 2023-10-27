#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: string dest
 * @src: string src
 * @n: number of elements to concatenate in
 * Return: pointer to resulting dest
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
