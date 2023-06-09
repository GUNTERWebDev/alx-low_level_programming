#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns
 * a pointer to a 2 dimensional array of integers.
 * @width: array width
 * @height: array height
 *
 * Return: pointer to array | NULL (Failure)
 */
int **alloc_grid(int width, int height)
{
	int	**arr;
	int	i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
		free(arr);
		return (NULL);
		}
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < height)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
