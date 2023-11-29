#include "variadic_functions.h"

void print_int(int);
void print_float(float);
void print_char(char);
void print_string(char *);
/**
 * print_all - function
 * @format: a format
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char formats[] = "cifs";
	void (*print)(void)[] = {print_char, print_int,
		print_float, print_string};
	va_list argv;
	void types[] = {char, int, float, char * };

	va_start(argv, format);

	while ((formats + i) != NULL)
	{

		if (i != 0)
			printf(", ");
		(print[i])(va_arg(argv, types[i]));
	}

	va_end(argv);
	printf("\n");
}


/**
 * print_int - function
 * @a: a int
 * Return: Nothing
 */
void print_int(int a)
{
	printf("%d", a);
}

/**
 * print_float - function
 * @a: float number
 * Return: Nothing
 */
void print_float(float a)
{
	printf("%f", a);
}

/**
 * print_char - function
 * @a: char
 * Return: Nothing
 */
void print_char(char a)
{
	putchar(a);
}

/**
 * print_string - function
 * @s: a string
 * Return: Nothing
 */
void print_string(char *s)
{
	printf("%s", s);
}
