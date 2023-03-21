#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the parameters of the dog strunture
 * @d: Structure to print
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
