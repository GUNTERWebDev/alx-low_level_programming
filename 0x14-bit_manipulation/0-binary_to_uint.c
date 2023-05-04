#include "main.h"
#include <string.h>
/**
 * binary_to_uint - convrt a decimal nb to binary
 * @b: given sring
 * Return:  the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		total <<= 1;
		total += b[i] - '0';
		i++;
	}
	return (total);
}
