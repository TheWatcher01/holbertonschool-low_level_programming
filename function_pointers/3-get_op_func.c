#include "3-calc.h"

/**
 * get_op_func - function pointer
 * @s: char*
 *
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
};

int i = 0;

while (ops[i].op != NULL)
{
	if (strcmp(ops[i].op, s) == 0)
		return (ops[i].f);
	i++;
}
	printf("Error\n");
	exit(99);
}
