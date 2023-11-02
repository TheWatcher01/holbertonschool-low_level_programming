#include "main.h"

/**
 * _strcpy - copy string from source to destination
 * @dest: char
 * @src: char
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
