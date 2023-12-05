#include "main.h"

/**
 * check_args - Checks if the number of command line arguments is correct
 * @argc: The number of command line arguments
 *
 * If the number of arguments is not 3, prints an error message and exits
 * with status code 97.
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from from_to\n");
		exit(97);
	}
}
