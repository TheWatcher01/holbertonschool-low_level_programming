#include "main.h"

/**
 * _puts_recursion - Prints a string to the console, recursively.
 *
 * @s: The string to print.
 *
 * Returns: Nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
