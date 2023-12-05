#include "main.h"
/**
 * main - Copies content of a file to another file
 * @argc: Argument count
 * @argv: Array of arguments, argv[1] is source, argv[2] is destination
 * Return: 0 on success, non-zero on failure
 */
void handle_error(int error_code, char *message) {
	dprintf(STDERR_FILENO, "%s", message);
	exit(error_code);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_from;
	char buffer[BUFFER_SIZE];
	ssize_t write_to;

	if (argc != 3)
		handle_error(USAGE_ERROR, "Usage: cp file_from fome_to\n");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		handle_error(READ_ERROR, "Error: Can't write to %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		handle_error(WRITE_ERROR, "Error: Can't read from file %s\n", argv[2]);

	while ((read_from = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_to = write(fd_to, buffer, read_from);
		if (write_to != read_from)
			handle_error(WRITE_ERROR, "Error: Can't write to %s", argv[2]);
	}

	if (read_from == -1)
		handle_error(READ_ERROR, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
		handle_error(CLOSE_ERROR, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		handle_error(CLOSE_ERROR, "Error: Can't close fd %d\n", fd_to);

	return (0);
}
