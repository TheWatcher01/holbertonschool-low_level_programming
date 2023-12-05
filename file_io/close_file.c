#include "main.h"

/**
 * close_file - Closes a file descriptor
 * @fd: The file descriptor to close
 *
 * If the file descriptor cannot be closed, prints an error message and exits
 * with status code 100.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
