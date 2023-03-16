#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - Allocates a space of size n
 * @b: size of allocated space
 * Return: Return pointer address of the allocated space
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
