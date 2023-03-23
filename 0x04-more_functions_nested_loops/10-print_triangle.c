#include "main.h"

/**
 * print_triangle - draw triangle on screen
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	i = size;
	while (i >= 1)
	{
		j = 1;
		while (j <= size)
		{
			if (j < i)
				_putchar(' ');
			else
				_putchar('#');
		j++;
		}
		_putchar('\n');
	i--;
	}
}
