#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - Allocates a array of memory of nemb elements of size bytes
 * @nmemb: number of elements
 * @size: size of elemeents
 * Return: pointer to address or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (i < nmemb)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
