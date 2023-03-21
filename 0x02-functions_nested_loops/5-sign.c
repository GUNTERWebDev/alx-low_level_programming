#include "main.h"
#include <unistd.h>
/**
 * print_sign - print sign of number
 * @n: number to be checked
 *
 * Return: 1 for positives, 0 for zero, -1 for negative
 */
int print_sign(int n)
{
	if (n == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	else if (n > 0)
	{
		write(1, "+", 1);
		return (1);
	}
	else
	{
		write(1, "-", 1);
		return (-1);
	}
}
