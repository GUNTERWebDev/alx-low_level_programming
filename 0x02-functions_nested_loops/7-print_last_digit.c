#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: input number
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int	p;

	p = n % 10;
	if (p < 0)
		p *= -1;
	_putchar(p + '0');
	return (p);
}
