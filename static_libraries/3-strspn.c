#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char
 * @accept: char
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	int i = 0;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
		}

		if (!found)
		{
			break;
		}
		s++;
	}
	return (count);
}
