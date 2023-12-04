#include "main.h"
/**
 * read_textfile - Function reads text file and print to POSIX standard output
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 * Return: Actual number of letters read and printed, or 0 if an error occurs.
 */
{
	int fd;
	ssize_t read_bytes;
	ssize_t total_read_bytes = 0;
	char buffer[1024];

	if (!filename) {
		return 0;
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1) {
		return 0;
	}

	while ((read_bytes = read(fd, buffer, sizeof(buffer))) > 0) {
		if (letters && read_bytes > letters) {
			read_bytes = letters;
		}

		if (write(STDOUT_FILENO, buffer, read_bytes) != read_bytes) {
			close(fd);
			return 0;
		}

		total_read_bytes += read_bytes;
		letters -= read_bytes;

		if (!letters) {
			break;
		}
	}

	if (read_bytes == -1) {
		close(fd);
		return 0;
	}

	close(fd);
	return total_read_bytes;
}
