#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * The program checks the number of arguments, opens source and destination
 * files, reads from the source file and writes to destination file, and
 * finally closes both files.
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	check_args(argc);

	fd_from = open_file(argv[1], O_RDONLY);
	fd_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC);

	read_write(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
