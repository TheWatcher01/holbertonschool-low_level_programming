#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: is an integer
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return -1;
	}
	else if (n == 0 || n == 1)
	{
		return n;
	}
	else 
	{
		int i = 1;

		while (i * i < n)
		{
			i++;
		}
		if (i * i == n)
			return i;
		else
		{
			return -1;
		}
	}
}
