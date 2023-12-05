#include "main.h"
/**
 * main - Copies content of a file to another file
 * @argc: Argument count
 * @argv: Array of arguments, argv[1] is source, argv[2] is destination
 *
 * The program reads from source and writes to destination.
 * If destination exists, it's truncated. If not, it's created.
 * The program reads source in 1024 byte chunks and writes to destination.
 * If error occurs during read, write, or close, it prints an error and exits.
 *
 * Return: 0 on success, non-zero on failure
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_from;
	char buffer[BUFFER_SIZE];
	ssize_t write_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((read_from = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_to = write(fd_to, buffer, read_from);
		if (write_to != read_from)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
	}
	if (read_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
