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
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
	}
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
}
