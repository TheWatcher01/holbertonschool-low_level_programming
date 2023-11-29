#include "variadic_functions.h"
/**
 * print_all - Prints various data types based provided format string.
 * @format: The format string specifying the types of arguments to print.
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				separator = ", ";
				break;
			case 's':
				printf("%s%s", separator, va_arg(args, const char *));
				separator = ", ";
				break;
			default:
				break;
		}
	}

	va_end(args);
	printf("\n");
}
