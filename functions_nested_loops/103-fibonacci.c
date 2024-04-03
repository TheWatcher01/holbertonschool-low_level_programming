#include <stdio.h>

/**
 * main - Prints the sum of the even-valued Fibonacci sequence terms not
 * exceeding 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i = 0, j = 1, sum = 0;
	unsigned long int k;

	while (1)
	{
		k = i + j;
		if (k > 4000000)
			break;

		if (k % 2 == 0)
			sum += k;

		i = j;
		j = k;
	}

	printf("%lu\n", sum);

	return (0);
}
