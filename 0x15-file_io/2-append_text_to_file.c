#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - append text to end of a file
 * @filename: name of file to append to
 * @text_content: content to append
 * Return: 1 if it exists or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (access(filename, W_OK) == -1)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
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
