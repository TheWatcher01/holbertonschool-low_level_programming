#include "main.h"

/**
 * read_textfile - Function reads text file and print to POSIX standard output
 *
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Actual number of letters read and printed, or 0 if an error occurs.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t n_read, n_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	n_read = read(fd, buffer, letters);
	n_written = write(STDOUT_FILENO, buffer, n_read);

	free(buffer);
	close(fd);

	return ((n_written == -1 || n_written != n_read) ? 0 : n_written);
}
