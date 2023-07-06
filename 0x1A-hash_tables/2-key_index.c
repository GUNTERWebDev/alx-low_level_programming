#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: key
 * @size: size of the array
 *
 * Return: return the index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;
	unsigned long int ky;

	if (size == 0)
	{
		return (0);
	}
	ky = hash_djb2(key) % size;
	i = 0;
	while (i < ky)
	{
		i++;
	}
	return (i);
}
