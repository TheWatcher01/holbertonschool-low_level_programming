#include<stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: value of main 0 (sucess)
 *
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
