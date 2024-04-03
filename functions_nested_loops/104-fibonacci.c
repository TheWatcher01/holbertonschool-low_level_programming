#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * The numbers are separated by a comma followed by a space. The program
 * manages the Fibonacci numbers in two parts to handle the large numbers
 * involved, and it handles overflow manually.
 *
 * Return: Always 0.
 */
int main(void)
{
	/* The lower and upper parts of the current and next Fibonacci numbers */
	unsigned long int a1 = 0, a2 = 1, b1 = 0, b2 = 2, next1, next2, count;

	/* Print the first two Fibonacci numbers */
	printf("1, 2");

	/* Calculate and print the next 96 Fibonacci numbers */
	for (count = 2; count < 98; count++)
	{
		/* Calculate the next Fibonacci number */
		next1 = a1 + b1;
		next2 = a2 + b2;
		if (next2 > 1000000000)
		{
			next2 -= 1000000000;
			next1++;
		}

		/* Print the next Fibonacci number */
		if (next1 > 0)
			printf(", %lu%09lu", next1, next2);
		else
			printf(", %lu", next2);

		/* Update current & next Fibonacci numbers for next loop iteration */
		a1 = b1;
		a2 = b2;
		b1 = next1;
		b2 = next2;
	}

	/* Print a newline at the end */
	printf("\n");

	/* Return 0 to indicate successful completion */
	return (0);
}
