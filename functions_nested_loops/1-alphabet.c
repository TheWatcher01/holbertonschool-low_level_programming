#include <stdio.h>
/**
 * main - Write a script that prints the alphabet, in lowercase.
 * print_alphabet - Script prints alphabet, in lowercase.
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
