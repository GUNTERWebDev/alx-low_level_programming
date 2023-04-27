#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * print_list - printf the content of linked lists
  * @h: head
  * Return: count of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
