#include "main.h"

/**
 * *string_nconcat - Function that concatenates two strings.
 * Up to n characters of the second string.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters of the second string to concatenate.
 *
 * Return: A pointer to a new string caontaining the concatenate strings,
 * or NULL if an error occured.
 *
 * The new string is allocated on the heap and must be free by the caller.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = strlen(s1), len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	new_str = malloc(sizeof(char) * (len1 + n + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	memcpy(new_str, s1, len1);
	memcpy(new_str + len1, s2, n);
	new_str[len1 + n] = '\0';

	return (new_str);
}
