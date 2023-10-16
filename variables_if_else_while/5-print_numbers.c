#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 from 0
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}

	putchar('\n');

	return (0);
}
