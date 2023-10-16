#include <stdio.h>

/**
 * main - Prints alphabet in lowercase, and in uppercase followed by a new line
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar ('\n');

	return (0);
}
