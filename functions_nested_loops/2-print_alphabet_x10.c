#include <stdio.h>
#include "main.h"
/**
 * main - Print the alphabet in lowercase, x10
 *
 * Return: value of main 0 (sucess)
 */
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
		letter = 'a';
		i++;
	}
}
