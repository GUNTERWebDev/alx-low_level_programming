#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert new node in giver index
 * @head: head of the nodes
 * @idx: the given index
 * @n: data of the index
 *
 * Return: the list of node || 0 if empty
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *ptr;

	ptr = *head;

	if (idx != 0)
	{
		i = 0;
		while (i < idx - 1 && ptr != NULL)
		{
			ptr = ptr->next;
			i++;
		}
	}

	if (ptr == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = ptr->next;
		ptr->next = new;
	}

	return (new);
}
