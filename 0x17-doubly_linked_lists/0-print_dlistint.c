#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: head node
 *
 * Return: lenght of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		printf("%d", h->h);
		h = h->next;
		len++;
	}
	return (len);
}
