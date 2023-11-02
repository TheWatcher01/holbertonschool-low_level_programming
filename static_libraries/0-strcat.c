#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: char
 * @src: char
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *concat_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (concat_dest);
}
