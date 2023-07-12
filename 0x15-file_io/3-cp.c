#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define BUFSIZE 1024

/**
 * exit_97 - exit with 97 error code
 */

void exit_97(void)
{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * exit_98 - exit a file with 98 error code
 * @file_from: file being copied
 */

void exit_98(char *file_from)
{
	dprintf(2, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
 * exit_99 - exit with 99 error code
 * @file_to: file being copied to
 */

void exit_99(char *file_to)
{
	dprintf(2, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
 * exit_100 - can't close a file descriptor
 * @fd: file descriptor value
 */

void exit_100(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - a program that copies the content of a file to another file.
 * @ac: no pf arguements 2 at most
 * @av: list of arguements file_to and file_from
 * Return: 0 or 1
 */

int main(int ac, char *av[])
{
	int fd_to, fd_from;
	ssize_t bytes_written, bytes_read;
	char *buffer = malloc(BUFSIZE);

	if (ac != 3)
		exit_97();

	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
		exit_98(av[1]);
	fd_to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to < 0)
		exit_99(av[2]);
	bytes_read = read(fd_from, buffer, BUFSIZE);
	if (bytes_read < 0)
		exit_98(av[1]);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written < 0)
			exit_99(av[2]);
		bytes_read = read(fd_from, buffer, BUFSIZE);
	}
	if (close(fd_to) < 0)
		exit_100(fd_to);
	if (close(fd_from) < 0)
		exit_100(fd_from);
	return (0);
}
