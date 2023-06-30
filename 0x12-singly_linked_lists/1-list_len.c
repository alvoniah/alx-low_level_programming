#include "lists.h"
/**
 * list_len - returns then no of elements
 * @h: singly linked list
 * Return: no of the elements
 */
size_t list_len(const list_t *h)
{
	size_t nel;

	nel = 0;
	while (h != NULL)
	{
		h = h->next;
		nel;
	}
	return (nel);
}
