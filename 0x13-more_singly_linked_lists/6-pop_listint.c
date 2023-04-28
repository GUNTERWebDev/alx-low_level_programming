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

	if (head == NULL)
		return (0);
		
	ptr = (*head)->next;
	n = (*head)->n;
	free(head);
	*head = ptr;

	return (n);
}
