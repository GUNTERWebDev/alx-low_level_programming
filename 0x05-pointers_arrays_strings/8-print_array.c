#include "main.h"
#include <stdio.h>
/**
 * print_array.c - printd array
 * @a: given integer
 * @n: is the number of elements of the array to be printed
 * return: void
 */
void print_array(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}

	i++;
	}
	printf("\n");
}
