#include "lists.h"
/**
 * listint_len - returns the elemts
 * @h: head of the list
 * Return: no of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodess = 0;

	while (h != NULL)
	{
		h = h->next;
		nodess++;
	}
	return (nodess);
}
