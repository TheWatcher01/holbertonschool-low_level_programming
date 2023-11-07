#include "main.h"

/**
 * *str_concat - Function that concatenates two strings.
 * The returned pointer point to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated
 *
 * @s1: Pointers to the character string 1
 * @s2: Pointers to the character string 2
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *new_string;

	s1 = s1 ? s1 : "";
	s2 = s2 ? s2 : "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	new_string = malloc((len1 + len2 + 1) * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}

	strcpy(new_string, s1);
	strcpy(new_string + len1, s2);

	return (new_string);
}
