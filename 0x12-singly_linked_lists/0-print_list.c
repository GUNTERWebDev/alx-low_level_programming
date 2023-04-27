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
	char *s;

	while (h)
	{
		if (h->str == NULL)
			s = "(nil)";
		else
			s = h->str;
		printf("[%d] %s\n", h->len, s);
		h = h->next;
		count++;
	}
	return (count);
}
