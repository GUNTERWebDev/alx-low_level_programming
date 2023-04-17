#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name)
		printf("%s\n", d->name);
	else
		printf("Name: (nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: ");
	if (d->owner)
		printf("%s\n", d->owner);
	else
		printf("Owner: (nil)");
}
