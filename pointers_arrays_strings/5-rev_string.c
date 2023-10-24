#include "main.h"
/**
 * rev_string - Script that reverse a string
 * @s: string to reversed
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	int temp;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	s--;

	for (j = i - 1; j >= i / 2; j--)
	{
		temp = *s;
		*s = s[j - i];
		s[j - i] = temp;
		s--;
	}
}
