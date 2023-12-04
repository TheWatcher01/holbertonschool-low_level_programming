#include "main.h"
/**
 * read_textfile - Function reads text file and print to POSIX standard output
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 * Return: Actual number of letters read and printed, or 0 if an error occurs.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t read_bytes;
	ssize_t writte_bytes;
	int fd;

	if (!(filename && letters))
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	read_bytes = read(fd, buffer, letters);
	close(fd);

	if (read_bytes < 0)
	{
		free(buffer);
		return (0);
	}
	if (!read_bytes)
		read_bytes = letters;

	writte_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	free(buffer);

	if (writte_bytes < 0)
		return (0);

	return (writte_bytes);
}
