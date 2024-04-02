#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Description: This program will print all unique combinations of three digits
 * in ascending order separated by comma followed by space. Three digits
 * must be different - 012 and 120 are considered the same combination.
 *
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
	/* Variables to keep track of the digits */
	int i, j, k, l;

	/* Loop through all three-digit numbers */
	for (i = 0; i < 1000; i++)
	{
		/* Calculate the value of the digits */
		j = i / 100;	   /* first digit */
		k = (i / 10) % 10; /* second digit */
		l = i % 10;		   /* third digit */

		/* If the digits are in ascending order, print the combination */
		if (j < k && k < l)
		{
			/* Print the first digit */
			putchar(j + '0');
			/* Print the second digit */
			putchar(k + '0');
			/* Print the third digit */
			putchar(l + '0');

			/* Print a comma and a space after all combinations except the last one */
			if (i < 700)
			{
				putchar(44); /* ASCII value for comma */
				putchar(32); /* ASCII value for space */
			}
		}
	}

	/* Print a newline character after the last combination */
	putchar('\n');

	/* Return 0 to indicate successful execution */
	return (0);
}
