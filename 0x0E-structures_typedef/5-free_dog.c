#include "dog.h"
#include <stdlib.h>

/**
 * d - dog to free memory of
 */

void free_dog(dog_t *d)
{
	free(d);
}
