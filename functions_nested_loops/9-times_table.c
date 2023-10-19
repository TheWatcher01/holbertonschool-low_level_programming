#include <stdio.h>
/**
 * void times_table(void) function that prints the 9 times table, starting with 0.
 */
void time_table(void)
{
	int i, j, reste;

	for (i = 0; i <=9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			reste = i * j;

			if (reste > 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(reste 0 '0');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar((reste / 10) + '0');
				_putchar((reste % 10) + '0');
			}
		}
		_putchar('\n');
	}

}
