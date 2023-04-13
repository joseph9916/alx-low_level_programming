#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>

/**
 * create_file - Create a file where filename is name of the file
 * @filename: Name of file
 * @text_content: Content of file
 * Return: 1 if successful or -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	bytes_written = write(fp, text_content, strlen(text_content));
	close(fp);
	if (bytes_written != -1)
		return (1);
	return (-1);
}
