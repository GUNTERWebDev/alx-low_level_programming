#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert new node in giver index
 * @idx: the given index
 * @n: data of the index
 *
 * Return: the list of node || 0 if empty
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int i;

	if (!idx)
		return (add_head(head, n));

	ptr = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (ptr == NULL)
			return (0);
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return (0);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->n = n, new->next = ptr->next;
	ptr->next = new;
	return (new);
}
