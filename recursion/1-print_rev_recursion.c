#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: String to be printed in reverse
 * 
 * The function works by recursively calling itself to print
 * the rest of the string, starting from the end.
 * Once it reaches the end of the string, it prints the
 * current character and returns.
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
