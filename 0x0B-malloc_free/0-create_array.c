#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - create array of size (size)
 * @size: size of array
 * @c: Initial value of character
 * Return: the intial address of array or NUll if size is 0 or if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(c) * (size + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	p[i] = '\0';
	return (p);
}
