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
	int i = strlen(b) - 1;
	unsigned int total = 0, dec = 1;
	int j = 0;

	if (!b)
		return (0);
	while (b[j])
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		j++;
	}
	while (i >= 0)
	{
		if (b[i] == '1')
			total += dec;
		dec *= 2;
		i--;
	}
	return (total);
}
