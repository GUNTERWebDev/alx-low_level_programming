#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory and initialize it to NULL
 * @nmemb: number of elements
 * @size: size of each elements
 * Return: pointer to allocated memory (Success) | NULL (Failure)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char	*arr;
	char	*call;
	unsigned int	i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	call = arr;
	i = 0;
	while (i < (nmemb * size))
		call[i++] = 0;
	return (call);
}
