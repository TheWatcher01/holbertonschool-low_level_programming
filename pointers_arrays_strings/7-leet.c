#include "main.h"

/**
 * leet - Encodes a string to leetspeak.
 * Leetspeak is a type of online jargon that uses numbers and 
 * symbols to replace letters.
 * This function encodes a string to leetspeak by replacing 
 * the following letters with
 * the corresponding numbers and symbols:
 *
 * | Letter | Leetspeak Replacement |
 * |---|---|
 * | a | 4 |
 * | e | 3 |
 * | o | 0 |
 * | t | 7 |
 * | l | 1 |
 *
 * @a: The string to encode.
 *
 * @return: The encoded string.
 */

char *leet(char *a)
{
	char *ptr = a;
	int i = 0;

	while (*a)
	{
		char leet_chars[] = "aAeEoOtTlL";
		char leet_replacements[] = "4433007711";

		for (i = 0; leet_chars[i] != '\0'; i++)
		{
			if (*a == leet_chars[i])
			{
				*a = leet_replacements[i];
				break;
			}
		}

	a++;
	}

	return (ptr);
}
