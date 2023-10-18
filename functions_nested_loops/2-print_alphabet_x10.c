#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Print the alphabet in lowercase, x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;
	while (i < 10)
	{
        	while (letter <= 'z')
        		{
				_putchar(letter);
				letter++;
        		}

        	_putchar('\n');
		i++;
	}
}
