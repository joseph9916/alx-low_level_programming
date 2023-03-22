#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - free memory of a structure
 * @d: dog structure to free memory of
 */

void free_dog(dog_t *d)
{
	free(d);
}
