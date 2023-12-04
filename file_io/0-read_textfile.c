#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 * Return: the actual number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	char c;
	size_t count = 0;

	if (filename == NULL)
		return (0);

	f = fopen(filename, "rt");
	if (f == NULL)
		return (0);

	while ((c = fgetc(f)) != EOF && count < letters)
	{
		if (write(1, &c, 1) != 1)
			return (0);
		count++;
	}

	fclose(f);
	return (count);
}
