#include <stdio.h>

/**
 * main - Prints all possible different combinations of two two-digit numbers
 *
 * Description: Program will print all unique combinations of two two-digit
 * numbers in ascending order separated by a comma followed by a space.
 * Two numbers must be different - 01 02 and 02 01 are considered same
 * combination.
 *
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
	/* Variables to keep track of the digits */
	int i, j;

	/* Loop through all possible combinations of two two-digit numbers */
	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			/* Print the first number */
			putchar((i / 10) + '0'); /* first digit */
			putchar((i % 10) + '0'); /* second digit */
			putchar(' ');			 /* ASCII value for space */

			/* Print the second number */
			putchar((j / 10) + '0'); /* first digit */
			putchar((j % 10) + '0'); /* second digit */

			/* Print a comma and a space after all combinations except the last one */
			if (!(i == 98 && j == 99))
			{
				putchar(','); /* ASCII value for comma */
				putchar(' '); /* ASCII value for space */
			}
		}
	}

	/* Print a newline character after the last combination */
	putchar('\n');

	/* Return 0 to indicate successful execution */
	return (0);
}
