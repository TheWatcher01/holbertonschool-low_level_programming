#include <stdio.h>

/**
 * main - Prints all possible different combinations of two two-digit numbers
 *
 * Description: Program will print all unique combinations of two two-digit
 * numbers in ascending order separated by a comma followed by a space.
 * The two numbers must be different - 01 02 and 02 01 are considered the same
 * combination.
 *
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* first digit */
		b = i % 10; /* second digit */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* first digit */
			d = j % 10; /* second digit */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32); /* ASCII value for space */

				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44); /* ASCII value for comma */
					putchar(32); /* ASCII value for space */
				}
			}
		}
	}

	putchar(10);

	return (0);
}
