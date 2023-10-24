#include "main.h"
/**
 * puts2 - Write a fuction that prints one character out of 2.
 * folowed by a nexw line
 * @str: string prints the char
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
