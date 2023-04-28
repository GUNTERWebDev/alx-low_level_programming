#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - free after allocate
  * @head: head
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *on, *off;

	on = head;
	while (on)
	{
		off = on->next;
		free(on);
		on = off;
	}
}
