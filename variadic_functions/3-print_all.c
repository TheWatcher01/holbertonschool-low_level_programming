#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 *
 * @list: va_list to print form
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

	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c%c", c, ',');
				break;
			case 'i':
				i_value = va_arg(args, int);
				printf("%d%c", i_value, ',');
				break;
			case 'f':
				f_value = va_arg(args, double);
				printf("%f%c", f_value, ',');
				break;
			case 's':
				s_value = va_arg(args, const char *);
				if (!s_value)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s%c", s_value, '\n');
				}
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);
}
