#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars
 * @size: size
 * @c: characters
 *
 * Return: NULL if size = 0 or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int	i;
	char	*arr;
	char	*q;

	arr = malloc(sizeof(char) * size);
	if ((q = malloc(sizeof(char) * size)) == NULL)
		return (0);
	if (size == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
	free(arr);
}
