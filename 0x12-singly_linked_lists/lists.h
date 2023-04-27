#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct list_t - singly linked list
 * @str: string - strin)
 * @len: string length
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_t
{
	struct list_t *next;
	char *str;
	unsigned int len;
} list_t;
size_t print_list(const list_t *h);
#endif /* LISTS_H */
