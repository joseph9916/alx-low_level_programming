#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * d - dog to free memory of
 */

void free_dog(dog_t *d)
{
	if (d->name == NULL)
		free(d->name);
	if (d->owner == NULL)
		free(d->owner);
	free(d);
}
