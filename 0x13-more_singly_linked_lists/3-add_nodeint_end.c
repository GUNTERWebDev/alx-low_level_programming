#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node
 * @head: head node
 * @n: node value of an integer
 *
 * Return: pointer to new allocated node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *prev;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (0);

	ptr->n = n, ptr->next = 0;
	if (*head == NULL)
		*head = ptr;
	else
	{
		prev = *head;
		while (prev->next)
			prev = prev->next;
		prev->next = ptr;
	}
	return (ptr);
}
