#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Description: This program will print all unique combinations of two digits
 * in ascending order separated by a comma followed by a space. The two digits
 * must be different - 01 and 10 are considered the same combination.
 *
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
	/* Variables to keep track of the digits */
	int i, j, k;

	/* Initialize the first digit */
	i = 0;

	/* Loop through all two-digit numbers */
	while (i < 100)
	{
		/* Calculate the value of the digits */
		j = i % 10; /* second digit */
		k = i / 10; /* first digit */

		/* If the first digit is less than the second, print the combination */
		if (k < j)
		{
			/* Print the first digit */
			putchar(k + '0');
			/* Print the second digit */
			putchar(j + '0');

			/* Print a comma and a space after all combinations except the last one */
			if (i < 89)
			{
				putchar(44); /* ASCII value for comma */
				putchar(32); /* ASCII value for space */
			}
		}

		/* Move on to the next number */
		i++;
	}

	/* Print a newline character after the last combination */
	putchar('\n');

	/* Return 0 to indicate successful execution */
	return (0);
}
