#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - print the parameters of the dog strunture
 * @d: Structure to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("%s\n", d->name);
	if (d->age != NULL)
		printf("%f\n", d->age);
	if (d->owner != NULL)
		printf("%s\n", d->owner);
}
