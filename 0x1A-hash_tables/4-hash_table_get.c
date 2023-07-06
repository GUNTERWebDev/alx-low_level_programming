#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key
 *
 * Return: with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	node = ht->array[i];
	if (node == NULL)
		return (NULL);
	while (strcmp(node->key, key))
		node = node->next;

	return (node->value);
}
