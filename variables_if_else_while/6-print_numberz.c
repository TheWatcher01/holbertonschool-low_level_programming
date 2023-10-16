#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	int digit

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + 48);
	}
	putchar('\n');
	
	return (0);
}
