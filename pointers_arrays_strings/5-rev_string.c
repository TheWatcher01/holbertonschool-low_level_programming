#include "main.h"
/**
 * rev_string - Script that reverse a string
 * @s: string to reversed
 */

void rev_string(char *s)
{
	{	
		int len = 0;
		
		while (s[len] != '/0')
			len++;
	}

	for (int i = 0; i < len / 2; i++)
	{
		chat temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
