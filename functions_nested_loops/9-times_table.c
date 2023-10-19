#include <stdio.h>
/**
 * void times_table(void) function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, reste;

	for (i = 0; i <=9; i++)
	{
		putchar('0');

		for (j = 1; j <= 9; j++)
		{
			reste = i * j;

			if (reste >= 10)
			{
				putchar(44);
				putchar(32);
				putchar(32);
				putchar(reste + '0');
			}
			else
			{
				putchar(44);
				putchar(32);
				putchar((reste / 10) + '0');
				putchar((reste % 10) + '0');
			}
		}
		putchar('\n');
	}

}
