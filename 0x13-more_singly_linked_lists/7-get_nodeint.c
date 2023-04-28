#include "lists.h"

/**
 * get_nodeint_at_index - return the chosen node index
 * @head: head node
 * @index: node's index
 *
 * Return: indexed node | 0 if not
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	i = 0;
	while (i < index)
	{
		if (ptr == NULL)
			return (0);
		ptr = ptr->next;
		i++;
	}

	return (ptr);
}
