#include "3-calc.h"

/**
 * op_add - Addition
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substraction
 * @a: int
 * @b: int
 *
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication
 * @a: int
 * @b: int
 *
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division
 * @a: int
 * @b: int
 *
 * Return: The result of the division of a by b.
 */

int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error: division by zero\n");
		exit(100);
	}
}

/**
 * op_mod - Modulo
 * @a: int
 * @b: int
 *
 * Return: The rest of the division of a by b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
