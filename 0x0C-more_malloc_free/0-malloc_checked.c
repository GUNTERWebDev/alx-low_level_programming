#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to allocated memory (Success) | exit (Failure)
 */
void *malloc_checked(unsigned int b)
{
	unsigned int	*arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
	free(arr);
}
