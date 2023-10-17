#include <stdio.h>
/**
 * Write a scrpt that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: On success return 0
 */
int main(void)
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
