#include "main.h"
/**
 * int _abs - function that computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 *Return: The absolute value of the integer.
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
