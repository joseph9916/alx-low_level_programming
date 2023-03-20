#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <strings.h>

/**
 * _realloc - Reallocates a block of memory
 * @ptr: pointer to the the allocated memory
 * @old_size: former size
 * @new_size: new size of allocated memory
 * Return: return pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_new = malloc(new_size);
	if (ptr == NULL)
		return (ptr_new);
	if (ptr_new == NULL)
	{
		free(ptr_new);
		return (NULL);
	}
	if (new_size > old_size)
		bcopy(ptr, ptr_new, old_size);
	if (old_size > new_size)
		bcopy(ptr, ptr_new, new_size);
	free(ptr);
	return (ptr_new);
}
