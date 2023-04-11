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
	arr = malloc(sizeof(int *) * width);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		arr[i] = malloc(sizeof(int *) * width);
	i = 0;
	while (i < width)
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
	for (i = 0; i < width ; i++)
	{
		for (j = 0; j < height; j++)
			free(arr[j]);
	}
	free(arr);
}
