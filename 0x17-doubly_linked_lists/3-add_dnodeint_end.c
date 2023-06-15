#include "lists.h"
/**
 * add_dnodeint_end - returns the new added nodes at end of a linked list.
 * @head: head node
 * @n: data
 *
 * Return: nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (head == NULL || (*head) == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp && tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}

	return (new);
}
