#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - function that delete hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL, *tmp = NULL;
	unsigned long int i = 0;

	if (ht && ht->size && ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];

			if (node)
			{
				if (node->next)
				{
					node = node->next;

					while (node != NULL)
					{
						tmp = node;
						node = node->next;
						free(tmp->key);
						free(tmp->value);
						free(tmp);
					}
				}

				node = ht->array[i];
				if (node->key && node->value)
				{
					free(node->key);
					free(node->value);
				}
			}
			free(node);
		}
		free(ht->array);
		free(ht);
	}
}
