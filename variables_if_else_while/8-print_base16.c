#include<stdio.h>

/**
 *
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	int digit = 0;

	while (digit < 64)
	{
		putchar(digit + '0');
	}

	putchar('\n');

	return (0);
}
