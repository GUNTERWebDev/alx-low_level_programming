#include "main.h"

/**
 * more_numbers - print 10 times from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int count = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		count = 0;
		while (j <= 14)
		{
			if (count > 9)
				_putchar(count / 10 + '0');
			_putchar(count % 10 + '0');
			count++;
			j++;
		}
	_putchar('\n');
	i++;
	}
}
