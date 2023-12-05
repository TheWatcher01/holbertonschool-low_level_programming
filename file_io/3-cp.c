#include "main.h"
/**
 * main - Copies content of a file to another file
 * @argc: Argument count
 * @argv: Array of arguments, argv[1] is source, argv[2] is destination
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_from;
	char buffer[BUFFER_SIZE];
	ssize_t write_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from fome_to\n");
		exit(97);
	}
	open_files(&fd_from, &fd_to, argv);
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
	close_files(fd_from, fd_to);
	return (0);
}
