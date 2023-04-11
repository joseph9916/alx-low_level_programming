#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: Name if file to print
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t n;
	char buffer[BUFSIZ];

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	n = read(fp, buffer, letters);
	write(1, buffer, n);

	close(fp);
	return (n);
}
