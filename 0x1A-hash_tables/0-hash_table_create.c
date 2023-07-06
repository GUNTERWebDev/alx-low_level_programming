#include "main.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tb;
	unsigned long int i;

	tb = malloc(sizeof(
