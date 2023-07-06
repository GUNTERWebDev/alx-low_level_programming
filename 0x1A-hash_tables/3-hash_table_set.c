#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: function that adds an element to the hash table.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *hs = NULL;
	unsigned long int i;

	if (ht == NULL || key == NULL || !(*key))
		return (0);
	i = key_index((unsigned char *) key, ht->size);
	hs = ht->array[i];
	if (hs && strcmp(key, hs->key) == 0)
	{
		free(hs->value);
		hs->value = strdup(value);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);
}
