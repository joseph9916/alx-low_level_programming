#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: filenaeme
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t no_of_read, no_write;
	int fp;
	char *buf = malloc(letters);

	if (!buf)
		return (0);
	if (!filename)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);
	no_of_read = read(fp, buf, letters);
	if (no_of_read < 0)
	{
		close(fp);
		return (0);
	}
	no_write = write(STDOUT_FILENO, buf, no_of_read);
	if (no_write < 0)
	{
		close(fp);
		return (0);
	}
	close(fp);
	return (no_write);
}
