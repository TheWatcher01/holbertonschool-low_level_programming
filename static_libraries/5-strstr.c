#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: char*
 * @needle: char*
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *c = needle;
		char *start = haystack;

		while (*c != '\0' && *start == *c)
		{
			c++;
			start++;
		}
		if (*c == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return ('\0');
}
