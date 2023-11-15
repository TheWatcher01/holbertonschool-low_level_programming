#include "function_pointers.h"

/**
 * print_name - Function that prints a name using a function pointer.
 * @name: Pointer to a string representing the name to be printed.
 * @f: Pointer to a function that takes a char pointer and returns void.
 * This function is used to print the name in a specific format.
 *
 * Return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
