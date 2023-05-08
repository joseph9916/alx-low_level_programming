#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 1024

/**
 * exit_100 - exit the program with 100 if the file desciptor can't close
 * @fd: name of file_desciptor to print in error message
 */

void exit_100(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * exit_99 - exit the program with 99 if it fails to write
 * @filename: name of file to print in error message
 */

void exit_99(const char *filename)
{
	dprintf(2, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * exit_98 - exit the program with 98 if fails to read
 * @filename: name of file to print in error message
 */

void exit_98(const char *filename)
{
	dprintf(2, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * exit_97 - exit the program with 97 if the arguements are the wrong amount
 */

void exit_97(void)
{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * main - copy contents of a file from one file to another
 * @ac: number of arguements
 * @av: arguements
 * Return: 0 if success or 1 if not
 */

int main(int ac, char *av[])
{
	int fd_to, fd_from;
	ssize_t bytes_read;
	char *buffer = malloc(BUFSIZE);
	char *file_from = av[1], *file_to = av[2];

	if (ac != 3)
		exit_97();
	if (access(file_from, R_OK) == -1)
		exit_98(file_from);
	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		exit_99(file_to);
	if (buffer == NULL)
	{
		free(buffer);
		return (-1);
	}
	while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		if (bytes_read == -1)
			exit_98(file_from);
		if (write(fd_to, buffer, bytes_read) == -1)
			exit_99(file_to);
	}
	if (close(fd_to) == -1)
		exit_100(fd_to);
	if (close(fd_from == -1))
		exit_100(fd_from);
	return (0);
}
