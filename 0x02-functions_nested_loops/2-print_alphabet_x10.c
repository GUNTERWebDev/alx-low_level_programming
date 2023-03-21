#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int	i;
	char alpha;

	i = 0;
	alpha = 'a';
	while (i < 10)
	{
		while (alpha <= 'z')
		{
			write(1, &alpha, 1);
			alpha++;
		}
		write(1, "\n", 1);
		alpha = 'a';
	i++;
	}
}
