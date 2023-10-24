#include "main.h"
/**
 * rev_string - Script that reverse a string
 * @s: string to reversed
 */

void rev_string(char *s)
{
	int len = strlen(s);
	for (int i = 0; i < len / 2; i++)
	{
		char temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i -1] = temp;
	}
}
