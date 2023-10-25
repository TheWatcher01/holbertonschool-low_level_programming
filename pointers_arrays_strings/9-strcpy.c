#include "main.h"
/**
 * _strcpy - function that copies a string
 * @dest: destination of strings pointed
 * @src: source
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int pchar;
	int len_src = 0;

	while (src[len_src] != '\0')
	{
		len_src++;
	}

	for (pchar = 0; pchar <= len_src; pchar++)
	{
		dest[pchar] = src[pchar];
	}
	return (dest);
}
