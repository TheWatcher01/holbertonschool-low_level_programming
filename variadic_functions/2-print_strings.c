#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: const char*
 * @n: unsigned int
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
