#include "main.h"
/**
 * *_strcat - function that concatenates two strings.
 * @dest: Pointers to char strings destination
 * @src: char Pointers to char strings src
 * Return: Pointers to strings dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);	
}
