#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * Return: the value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;
	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	putchar (last_digit + '0');
	return (last_digit);

}
