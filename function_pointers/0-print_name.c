#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * @name: Pointer to a characters.
 * @f: Pointer function f to void.
 *
 * Return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
	{
		return;

		f(name);
	}
}
