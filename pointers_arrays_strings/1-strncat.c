#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: string dest
 * @src: string src
 * @n: number of elements to concatenate in
 * Return: pointer to resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *new_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (new_dest);
}
