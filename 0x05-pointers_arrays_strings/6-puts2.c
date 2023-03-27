#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: given string
 * return: void
 */
void puts2(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (str[i])
	{
		_putchar(str[i]);
		if (i == len - 1)
			break;
		i += 2;
	}
	_putchar('\n');
}
