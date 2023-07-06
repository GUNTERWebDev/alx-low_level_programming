#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create an empty hash table
 * @size: size of the array
 *
 * Return: return tb or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tb;
	unsigned long int i;

	tb = malloc(sizeof(*tb));
	if (tb == NULL)
		return (NULL);

	tb->size = size;
	tb->array = malloc(sizeof(*tb->array) * size);
	if (tb->array == NULL)
	{
		free(tb);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		tb->array[i] = NULL;

	return (tb);
}
