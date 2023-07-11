#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!(filename))
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
		if (write(fd, text_content, strlen(text_content)) < 0)
			return (-1);
	return (1);
}
