#include "main.h"

/**
 * open_file - Opens a file with specified flags
 * @file: The name of the file to open
 * @flags: The flags to use when opening the file
 *
 * If the file cannot be opened, prints an error message and exits
 * with status code 98 if the file was to be opened for reading,
 * or 99 if the file was to be opened for writing.
 *
 * Return: The file descriptor of the opened file
 */
int open_file(char *file, int flags)
{
	int fd = open(file, flags, 0664);
	if (fd == -1)
	{
		if (flags == O_RDONLY)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			exit(98);
		}
		else
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			exit(99);
		}
	}
	return fd;
}
