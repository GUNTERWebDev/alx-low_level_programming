#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
  * add_node_end - insert new node head of list_t
  * @head: head node
  * @str: node's string
  * Return: pointer to new head (Success) | NULL (Failure)
  */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t size;
	char *s;
	list_t *ptr, *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	if (str)
	{
		s = strdup(str);
		size = strlen(str);
	}
	else
	{
		s = 0;
		size = 0;
	}
	new->str = s;
	new->len = size;
	new->next = 0;

	if (*head == NULL)
		*head = new;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (new);
}
