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

	tmp = malloc(sizeof(*tmp));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;
	if (!head || !(*head))
		*head = tmp;
	else
	{
		new = *head;
		while (new->next && new)
			new = new->next;
		new->next = tmp;
		(*head)->prev = new;
	}
	return (tmp);
}
