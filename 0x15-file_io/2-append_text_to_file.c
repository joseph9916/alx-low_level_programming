#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

/**
 * append_text_to_file - append text to end of a file
 * @filename: name of file to append to
 * @text_content: content to append
 * Return: 1 if it exists or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		bytes_written = write(fp, text_content, strlen(text_content));
		if (bytes_written == -1)
			return (-1);
	}
	return (1);
}
