#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum of all parameters passed to the function.
 * @n: The number of parameters to be summed.
 *
 * This function takes an unsigned integer `n` as its first parameter,
 * indicating the number of parameters to be summed.
 * It then iterates through the remaining parameters, accumulating their sum.
 *
 * Return: The sum of all the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;

	va_list args_p;

	va_start(args_p, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args_p, int);
	}

	va_end(args_p);

	return (sum);
}
