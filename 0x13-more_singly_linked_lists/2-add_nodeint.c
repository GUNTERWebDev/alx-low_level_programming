#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - prints the new created node
 *
 * @head: head node
 * @n: value of inetger
 *
 * Return: pointer to new allocated head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (0);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
