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

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min) + 1);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{	
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
