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
	/* The first two Fibonacci numbers */
	unsigned long int a = 1, b = 2;

	/* The next Fibonacci number */
	unsigned long int next;

	/* The counter for the loop */
	unsigned long int count;

	/* Print the first two Fibonacci numbers */
	printf("%lu, %lu", a, b);

	/* Calculate and print the next 96 Fibonacci numbers */
	for (count = 2; count < 98; count++)
	{
		/* Calculate the next Fibonacci number */
		next = a + b;

		/* Update the current two Fibonacci numbers */
		a = b;
		b = next;

		/* Print the next Fibonacci number */
		printf(", %lu", next);
	}

	/* Print a newline at the end */
	printf("\n");

	/* Return 0 to indicate successful completion */
	return (0);
}
