#include "main.h"

/**
 * times_table - print times table for 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
	int	a;
	int	b;
	int	res;
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		_putchar(0 + '0');
		j = 1;
		while (j < 10)
		{
			res = i * j;
			a = res / 10;
			b = res % 10;
			_putchar(',');
			_putchar(' ');
			if (a != 0)
				_putchar(a + '0');
			else
				_putchar(' ');
			_putchar(b + '0');
		j++;
		}
	_putchar('\n');
	i++;
	}
}
