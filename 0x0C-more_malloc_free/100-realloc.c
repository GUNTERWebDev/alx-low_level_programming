#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: previous memory pointer
 * @old_size: size of ptr int bytes
 * @new_size: new size in bytes
 * Return: pointer to new allocated memory (Success) | NULL (Failure)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1, *old_p;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (p1 == NULL)
		return (NULL);

	old_p = ptr;

	if (new_size < old_size)
	{
		for (index = 0; index < new_size; index++)
			p1[index] = old_p[index];
	}
	else if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
			p1[index] = old_p[index];
	}

	free(ptr);

	return (p1);
}
