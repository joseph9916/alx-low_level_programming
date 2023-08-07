#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 1024

/**
 * exit_97 - exits wit code 97
 */

void exit_97(void)
{
	dprintf(2, "Usage: cp file_from file_to");
	exit(97);
}

/**
 * exit_98 - exits withs a code 98
 * @filename: name of file
 */

void exit_98(const char *filename)
{
	dprintf(2, "Error: Can't read from file %s", filename);
	exit(98);
}

/**
 * exit_99 - exit with a code 99
 * @filename: name of file
 */

void exit_99(const char *filename)
{
	dprintf(2, "Error: Can't write to %s", filename);
	exit(99);
}

/**
 * exit_100 - exits with a code 100
 * @fp: file descriptor
 */

void exit_100(int fp)
{
	dprintf(2, "Error: Can't close fd %d", fp);
	exit(100);
}

/**
 * main - main function to copy from file to another
 * @ac: no of arguements
 * @av: arguements
 * Return: 0 for sucess or exit
 */

int main(int ac, char *av[])
{
	int fd_to, fd_from, n;
	ssize_t no_of_read, no_of_write;
	char *buf = malloc(BUFSIZE);

	if (ac != 3)
		exit_97();
	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
		exit_98(av[1]);
	no_of_read = read(fd_from, buf, BUFSIZE);
	if (no_of_read < 0)
		exit_98(av[1]);
	fd_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
		exit_99(av[2]);
	while (no_of_read > 0)
	{
		no_of_write = write(fd_to, buf, no_of_read);
		if (no_of_write < 0)
			exit_99(av[2]);
		no_of_read = read(fd_from, buf, BUFSIZE);
	}
	n = close(fd_to);
	if (n < 0)
		exit_100(fd_to);
	n = close(fd_from);
	if (n < 0)
		exit_100(fd_from);
	return (0);
}
