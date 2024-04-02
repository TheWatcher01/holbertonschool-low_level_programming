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
	int i, j;

	/* Loop through all possible combinations of two digits */
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			/* Print the first digit */
			putchar(i + '0');
			/* Print the second digit */
			putchar(j + '0');

			/* Print comma and space after all combinations except last one */
			if (!(i == 8 && j == 9))
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
