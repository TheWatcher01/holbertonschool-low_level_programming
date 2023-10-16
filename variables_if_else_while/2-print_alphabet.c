#include <stdio.h>

int main(void)
/**
 * main - Print the alphabet in lowercase
 *
 * Return value 0 (sucess)
 */
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
