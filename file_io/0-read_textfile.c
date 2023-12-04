#include "main.h"

/**
 * read_textfile - Reads text file and prints it to POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 * Return: Actual number of letters read and printed, or 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	char c;
	size_t count = 0;

	if (filename == NULL)
	{
		return (0);
	}

	f = fopen(filename, "rt");
	if (f == NULL)
	{
		return (0);
	}

	while ((c = fgetc(f)) != EOF && count < letters)
	{
		if (write(1, &c, 1) != 1)
		{
			fclose(f);
			return (0);
		}
		count++;
	}

	fclose(f);
	return (count);
}
