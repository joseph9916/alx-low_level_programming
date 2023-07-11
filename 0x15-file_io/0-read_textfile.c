#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: name of file to read
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buf;

	if (!(filename))
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(letters);
	if (!(buf))
		return (0);
	bytes_read = read(fd, buf, letters);
	if (bytes_read < 0)
		return (0);
	bytes_written = write(1, buf, letters);
	if (bytes_written < 0)
		return (0);
	return (bytes_read);
}
