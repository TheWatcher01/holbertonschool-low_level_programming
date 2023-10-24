#include 'main.h'
/**
 * print_rev - function that prints a string, in reverse, with a new line.
 * @s: that print a string in reverse
 */
void print_rev(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
