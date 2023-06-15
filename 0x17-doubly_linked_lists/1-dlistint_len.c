#include "lists.h"
/**
 * dlistint_len - function returns the number of elements in a linked list.
 * @h: head node
 *
 * Return: lenght of the nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
