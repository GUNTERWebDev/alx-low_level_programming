#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: given number
 * @index: iven index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ar;

	if (index > 63)
		return (-1);
	ar = 1 << index;
	*n &= ~ar;
	return (1);
}
