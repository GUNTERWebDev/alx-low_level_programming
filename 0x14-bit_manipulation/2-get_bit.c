#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: given number
 * @index: given position
 *
 * Return: index || -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	if (n & m)
		return (1);
	else
		return (0);
}
