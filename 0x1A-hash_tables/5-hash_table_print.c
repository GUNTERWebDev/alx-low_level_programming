#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");

			flag = 1;
			printf("'%s': '%s'", (char *) node->key,
					(char *) node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
