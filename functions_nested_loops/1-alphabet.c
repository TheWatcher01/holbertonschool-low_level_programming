#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Script prints alphabet, in lowercase.
 * @void
 *
 * Return for sucess 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
