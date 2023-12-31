#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * This function capitalizes all words of a string.
 *
 * @a: The string to capitalize.
 *
 * Return: The capitalized string.
 */
char *cap_string(char *a)
{
	char *convert = a;
	int len = 0;

	if (a[0] >= 'a' && a[0] <= 'z')
	{
		a[len] = a[len] - 32;
	}

	while (a[len] != '\0')
	{
		if (a[len] == ' ' ||
				a[len] == '.' ||
				a[len] == '\t' ||
				a[len] == '\n' ||
				a[len] == ',' ||
				a[len] == ';' ||
				a[len] == '!' ||
				a[len] == '?' ||
				a[len] == '"' ||
				a[len] == '(' ||
				a[len] == ')' ||
				a[len] == '{' ||
				a[len] == '}')
		{
			if (a[len + 1] >= 'a' && a[len + 1] <= 'z')
			{
				a[len + 1] = a[len + 1] - 32;
			}
		}
		len++;
	}

	return (convert);
}
