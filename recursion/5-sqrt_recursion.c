#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: is an integer
 * Return: -1
 */

int calculate_sqrt(int n, int sqr)
{
	if (sqr * sqr == n)
	{
		return (sqr);
	}

	else if (sqr * sqr > n)
	{
		return (-1);
	}

	else 
	{
		return (calculate_sqrt(n, sqr + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: is an integer
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (calculate_sqrt(n, 0));
}
