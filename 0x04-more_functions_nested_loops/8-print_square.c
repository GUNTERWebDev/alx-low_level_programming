#include "main.h"

/**
 * print_square - draws square on the screen
 * @size: number of times '#' should be printed (size of square)
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
	_putchar('\n');
	i++;
	}
}
