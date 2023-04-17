#include "dog.h"
#include "stdlib.h"
/**
 * free_dog - frees memory allocated for dog_t struct
 * @d: pointer to struct to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
