#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: given array
 * @n: array's length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
