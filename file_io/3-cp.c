#include "main.h"
/**
 * main - Copies content of a file to another file
 * @argc: Argument count
 * @argv: Array of arguments, argv[1] is source, argv[2] is destination
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int fd_to, fd_from;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
	if (fd_to == -1)
	{
		perror("Error: Can't create file");
		exit(99);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		perror("Error: Can't read file");
		exit(98);
	}

	while (1)
	{
		bytes_read = read(fd_from, buffer, sizeof(buffer));
		if (bytes_read == 0)
			break;
		else if (bytes_read == -1)
		{
			perror("Error: Can't read file");
			exit(98);
		}

		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			perror("Error: Can't write to file");
			exit(99);
		}
	}

	close(fd_from);
	close(fd_to);

	return (0);
}
