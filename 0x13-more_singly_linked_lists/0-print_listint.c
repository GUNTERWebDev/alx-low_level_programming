#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - printf the list of linked list
 * @h - list
 * return: returns the count of list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
