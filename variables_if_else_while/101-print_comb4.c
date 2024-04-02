#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Description: This program will print all unique combinations of three digits
 * in ascending order separated by a comma followed by a space. Three digits
 * must be different - 012, 120, 102, 021, 201, 210 are considered same
 * combination.
 *
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
	/* Variables to keep track of the digits */
	int i, j, k;

	/* Loop through all possible combinations of three digits */
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				/* Print the first digit */
				putchar(i + '0');
				/* Print the second digit */
				putchar(j + '0');
				/* Print the third digit */
				putchar(k + '0');

				/* Print a comma and a space after all combinations except the last one */
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(','); /* ASCII value for comma */
					putchar(' '); /* ASCII value for space */
				}
			}
		}
	}

	/* Print a newline character after the last combination */
	putchar('\n');

	/* Return 0 to indicate successful execution */
	return (0);
}
