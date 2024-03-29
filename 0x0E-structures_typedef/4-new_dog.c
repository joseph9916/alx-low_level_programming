#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new instance of the dog structure
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: dog new dog or null if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy, *owner_copy;
	dog_t *new_dog;
	int n;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	name_copy = malloc(n + 1);
	if (!name_copy)
	{
		free(new_dog);
		return (NULL);
	}
	for (n = 0; owner[n]; n++)
		;
	owner_copy = malloc(n + 1);
	if (!owner_copy)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	for (n = 0; name[n]; n++)
		name_copy[n] = name[n];
	name_copy[n] = '\0';
	for (n = 0; owner[n]; n++)
		owner_copy[n] = owner[n];
	owner_copy[n] = '\0';
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog);
}
