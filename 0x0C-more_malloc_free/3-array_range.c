#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: starting number
 * @max: ending number
 * Return: pointer to new array (Success) | NULL (Failure)
 */
int *array_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * max + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
