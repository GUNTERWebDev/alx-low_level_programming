#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first given integer
 * @m: second given integer
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int bit;

	bit = n ^ m;
	while (bit > 0)
	{
		num++;
		bit &= (bit - 1);
	}
	return (num);
}
