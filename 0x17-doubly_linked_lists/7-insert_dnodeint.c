#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head node
 * @idx: given index
 * @n: new node's value
 *
 * Return: address of new node | null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (h == NULL || (*h) == NULL)
		return (NULL);

	tmp = *h;
	for (i = 0; tmp && i < (idx - 1); i++)
		tmp = tmp->next;

	if (tmp == NULL)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;

	new->next = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	if (new->next)
		new->next->prev = new;
	return (new);
}
