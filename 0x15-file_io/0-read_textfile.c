#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: Name if file to print
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t letters_read;
	ssize_t letters_written;
	char *buffer = malloc(letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	letters_read = read(fd, buffer, letters);
	if (letters_read == -1)
	{
		close(fd);
		return (0);
	}
	letters_written = write(STDOUT_FILENO, buffer, letters_read);
	if (letters_written == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (letters_written);
}
