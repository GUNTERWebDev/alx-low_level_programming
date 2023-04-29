#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of a list.
 * @index: given index deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev;
	listint_t *ptr;

	prev = *head;

	if (index != 0)
	{
		i = 0;
		while (i < index - 1 && prev != NULL)
		{
			prev = prev->next;
			i++;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	ptr = prev->next;

	if (index != 0)
	{
		prev->next = ptr->next;
		free(ptr);
	}
	else
	{
		free(prev);
		*head = ptr;
	}

	return (1);
}
