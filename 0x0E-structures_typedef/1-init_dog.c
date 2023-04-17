#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog
 * @name: Pointer to a char string for the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a char string for the owner's name
 * return: void
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (0);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
