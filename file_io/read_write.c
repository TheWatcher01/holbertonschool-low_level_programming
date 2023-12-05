#include "main.h"

/**
 * read_write - Reads from one file descriptor and writes to another
 * @fd_from: The file descriptor to read from
 * @fd_to: The file descriptor to write to
 *
 * The function reads from fd_from in chunks of BUFFER_SIZE bytes and writes
 * to fd_to. If error occurs during reading or writing, it prints an error
 * message and exits with status code 98 for read errors or 99 for write error
 */
void read_write(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t read_from, write_to;

	while ((read_from = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_to = write(fd_to, buffer, read_from);
		if (write_to != read_from)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to fd %d", fd_to);
			exit(99);
		}
	}
	if (read_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from fd %d", fd_from);
		exit(98);
	}
}
