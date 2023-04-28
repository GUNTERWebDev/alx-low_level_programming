#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sum all the linked nodes
 * @head: head
 *
 * Return: sum of all of the nodes || 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == 0)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
