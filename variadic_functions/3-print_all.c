#include "variadic_functions.h"

/**
 * print_all - Function prints various data types based on a provided
 * format string.
 *
 * @format: The format string specifying the types of arguments to print.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char c;
	int i_value;
	float f_value;
	const char *s_value;
	char *separator = "";

	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", separator, c);
				separator = ", ";
				break;
			case 'i':
				i_value = va_arg(args, int);
				printf("%s%d", separator, i_value);
				separator = ", ";
				break;
			case 'f':
				f_value = va_arg(args, double);
				printf("%s%f", separator, f_value);
				separator = ", ";
				break;
			case 's':
				s_value = va_arg(args, const char *);
				if (!s_value)
				{
					s_value = "(nil)";
				}
				printf("%s%s", separator, s_value);
				separator = ", ";
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
