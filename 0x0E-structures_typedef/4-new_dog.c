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
	struct dog *new_dog;

	char *name_copy __attribute__((unused)) = name;
	char *owner_copy __attribute__((unused)) = owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
