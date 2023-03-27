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

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (str[i])
	{
		if (i == len / 2)
		{
			while (str[i])
			{
				_putchar(str[i]);
				i++;
			}
		}
	i++;
	}
	_putchar('\n');
}
