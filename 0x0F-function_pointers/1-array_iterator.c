#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element of an array
 * @array: given array
 * @size: size of array
 * @action: function to execute
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int	i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	i = 0;
	while (i < size)
	{
		action(*array);
		i++;
		array++;
	}
}
