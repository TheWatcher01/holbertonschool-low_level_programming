#include <stdio.h>
/**
 * main - Print the alphabet in lowercase
 *
 * Return: value of main 0 (sucess)
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
