#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: The string to print between each pair of strings.
 * If `NULL`, no separator is printed.
 * @n: The number of strings to print.
 * @...: A variadic list of strings to print.
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args_p;
	const char *str;

	va_start(args_p, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args_p, const char *);
		if (i > 0 && separator)
		{
			printf("%s", separator);
		}
		if (!str)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
	}
	printf("\n");

	va_end(args_p);
}
