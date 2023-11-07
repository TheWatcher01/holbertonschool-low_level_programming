#include "main.h"

/**
 * *str_concat - Function that concatenates two strings.
 * The returned pointer point to a newly allocated space in memory which 
 * contains the contents of s1, followed by the contents of s2, and null terminated
 *
 * @s1: Pointers to the character string 1
 * @s2: Pointers to the character string 2
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL || *s1 == '\0')
	{
		s1 = "";
	}

	if (s2 == NULL || *s2 == '\0')
	{
		s2 = "";
	}

	while (s1[len1])
	{
		len1++;
	}

	while (s2[len2])
	{
		len2++;
	}

	new_string = malloc((len1 + len2 + 1) * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		new_string[i] = s1[i];
	}

	for (j = 0; j < len2; j++, i++)
	{
		new_string[i] = s2[j];
	}

	new_string[i] = '\0';

	return (new_string);
}
