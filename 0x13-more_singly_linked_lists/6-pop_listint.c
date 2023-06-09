#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - delete the first node
 * @head: node
 *
 * Return: data of the node || 0 if head NULL
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;
	ptr = curr->next;
	n = curr->n;
	free(curr);
	*head = ptr;

	return (n);
}
