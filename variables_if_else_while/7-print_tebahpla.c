#include<stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: value of main 0 (sucess)
 *
 */

int main(void)
{
	char letter = 'z';

	while (letter <= 'a')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
