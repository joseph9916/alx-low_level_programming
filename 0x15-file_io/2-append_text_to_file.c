#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: s the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t n;

	if (!filename)
		return (-1);
	fp = open(filename, O_RDWR | O_APPEND);
	if (fp < 0)
		return (-1);
	if (!text_content)
		return (1);
	n = write(fp, text_content, strlen(text_content));
	if (n < 0)
		return (-1);
	return (1);
}
