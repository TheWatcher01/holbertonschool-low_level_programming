#include <stdio.h>
/**
 * print_alphabet - Script prints alphabet, in lowercase.
 * @void
 * Return for sucess 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
}
