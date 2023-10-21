#include "main.h"

/**
*print_numbers - Script that prints 0123456789, followed by a new line
*Return: void
*/
void print_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
}
