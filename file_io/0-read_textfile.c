#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters it should attempt to read and print
 *
 * This function opens the file named by the string 'filename', reads 'letters'
 * number of characters from it, and writes those characters to the standard
 * output. It uses the POSIX system calls open, read, write, and close, and
 * dynamically allocates a buffer to hold the data.
 *
 * Return: The actual number of letters it could read and print, which can be
 * less than 'letters' if the file is shorter than 'letters' characters, or if
 * it encounters an error. If the function fails at any point, it returns 0.
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
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (n_written);
}
