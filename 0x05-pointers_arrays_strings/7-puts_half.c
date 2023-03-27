#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: given string
 * return: void
 */
void puts_half(char *str)
{
	int	i;
	int	len;

	len = 0;
	while (str[len])
		len++;
	i = len / 2;
	if (i % 2 == 1)
		i = (len + 1) / 2;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
