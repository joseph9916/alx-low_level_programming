#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialize dog structure
 * @d: structure with type dog containing the parameteers below
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
