#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return the lenght of a linked list
 * @h: linked list
 *
 * Return: the length of the linked list
 **/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
