#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: given str
 * return: void
 */
void print_rev(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}

	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
