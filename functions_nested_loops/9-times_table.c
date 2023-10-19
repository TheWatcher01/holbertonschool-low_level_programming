#include <stdio.h>
/**
 * void times_table(void) function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int x, y, reste;

	for (x = 0; x <= 9; x++)
	{
		putchar('0');

		for (y = 1; y <= 9; y++)
		{
			reste = x * y;

			if (reste < 10)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(reste + '0');
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar((reste / 10) + '0');
				putchar((reste % 10) + '0');
			}
		}
		putchar('\n');
	}

}
