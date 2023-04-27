#include "lists.h"
#include <stddef.h>

/**
  * list_len - length of the linked list
  * @h: head node
  * Return: Length of list_t count
  */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
