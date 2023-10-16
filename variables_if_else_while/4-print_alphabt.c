#include <stdio.h>
/**
 * main - Prints the base 10 starting from 0,followed by a new line
 * Return: value 0 (sucess)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}
