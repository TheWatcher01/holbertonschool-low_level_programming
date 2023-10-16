#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line
 *
 * Return: value of main 0 (sucess)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter !='e')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}
