#include "main.h"

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
