#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 on success, 98, 99, or 100 on error
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (!operation)
		return (1);

	result = operation(a, b);
	printf("%d\n", result);

	return (0);
}

