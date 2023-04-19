#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array to be searched
 * @size: array size
 * @cmp: function to compare two integers
 * Return: index of integer if found | -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (array == NULL || cmp == NULL)
	{
		return (0);
	}
	if (size <= 0)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
	i++;
	}
	return (-1);
}
