#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised
 * to the power of y.
 * @x: The variable x represents the base value,
 * whose power needs to be calculated.
 * @y: The variable y represents the exponent value. It is of the type double.
 * Return: If y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return -1;
	}
	else if (y == 0)
	{
		return 1;
	}
	else 
	{
		return x * _pow_recursion(x, y - 1);
	}
}
