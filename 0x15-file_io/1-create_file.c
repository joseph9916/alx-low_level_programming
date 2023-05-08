#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Create a file where filename is name of the file
 * @filename: Name of file
 * @text_content: Content of file
 * Return: 1 if successful or -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
