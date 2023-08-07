#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
 * create_file - a function that creates a file.
 * @filename: a function that creates a file.
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t n;

	if (!filename)
		return (-1);
	fp = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fp < 0)
		return (-1);
	if (!text_content)
		return (1);
	n = write(fp, text_content, strlen(text_content));
	if (n < 0)
		return (-1);
	close(fp);
	return (1);
}
