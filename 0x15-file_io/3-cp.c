#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * exit_100 - exit the program with 99
 * @fd: name of file_descriptoor to print in error message
 */

void exit_100(int fd)
{
	dprintf(2, "Error: Can't close fd %d", fd);
	exit(100);
}
/**
 * exit_99 - exit the program with 99
 * @filename: name of file to print in error message
 */

void exit_99(const char *filename)
{
	dprintf(2, "Error: Can't write to %s", filename);
	exit(99);
}

/**
 * exit_98 - exit the program with 99
 * @filename: name of file to print in error message
 */

void exit_98(const char *filename)
{
	dprintf(2, "Error: Can't read from file %s", filename);
	exit(98);
}

/**
 * main - copy contents of a file from one file to another
 * @argc: number of arguements
 * @argv: arguements
 * Return: 0 if success or 1 if not
 */

int main(int argc, char *argv[])
{
	int f_from, f_to, c_from, c_to;
	ssize_t nread, nwrite;
	char *buffer = malloc(1024);

	if (argc != 3)
	{
		dprintf(2, "Usage: cp");
		exit(97);
	}
	f_from = open(argv[1], O_RDONLY);
	if ((access(argv[1], F_OK) == -1) || f_from == -1)
		exit_98(argv[1]);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (f_to != -1)
	{
		while ((nread = read(f_from, buffer, 1024)) > 0)
		{
			nwrite = write(f_to, buffer, nread);
			if (nwrite == -1)
				exit_99(argv[2]);
		}
	}
	else
		exit_99(argv[2]);
	c_from = close(f_from);
	if (c_from == -1)
		exit_100(f_from);
	c_to = close(f_to);
	if (c_to == -1)
		exit_100(f_to);
	return (0);
}
