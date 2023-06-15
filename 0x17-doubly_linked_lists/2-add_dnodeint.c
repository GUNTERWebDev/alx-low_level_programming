#include "lists.h"
/**
 * add_dnodeint - function returns the new added nodes in a linked list.
 * @head: head node
 * @n: data
 *
 * Return: lenght of the nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(*tmp));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;
	while (head && (*head))
	{
		(*head)->prev = tmp;
		tmp->next = *(head);
	}
	if (head != NULL)
		*(head) = tmp;
	return (tmp);
}
