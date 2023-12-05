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
/**
 * open_files - Opens the source and destination files
 * @fd_from: Pointer to the file descriptor of the source file
 * @fd_to: Pointer to the file descriptor of the destination file
 * @argv: Array of arguments, argv[1] is source, argv[2] is destination
 */
void open_files(int *fd_from, int *fd_to, char *argv[])
{
	*fd_from = open(argv[1], O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(98);
	}
	*fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * close_files - Closes the source and destination files
 * @fd_from: File descriptor of the source file
 * @fd_to: File descriptor of the destination file
 */
void close_files(int fd_from, int fd_to)
{
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
}
