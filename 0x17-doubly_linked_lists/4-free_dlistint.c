#include "lists.h"

/**
 * free_dlistint - frees a dlistint
 * @head: head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == 0)
		return;

	next = head->next;
	while (head)
	{
		free(head);
		head = next;
		if (next)
			next = next->next;
	}
}
