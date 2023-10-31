#include "main.h"

/**
 * calc_prime - Calculates whether a given integer is prime.
 *
 * @n: The integer to check.
 * @prime: The current prime number to check against.
 *
 * Returns: 1 if n is prime, 0 otherwise.
 */

int calc_prime(int n, int prime)
{
	if (n % prime == 0 && prime < n)
	{
		return (0);
	}

	else if (n == prime)
	{
		return (1);
	}

	return (calc_prime(n, prime + 1));
}

/**
 * is_prime_number - Determines whether a given integer is prime.
 *
 * @n: The integer to check.
 *
 * Returns:
 *   1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (calc_prime(n, 2));
}
