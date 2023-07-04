#include "lists.h"
/**
 * print_listint - function that prints all elements
 * @h: head of the list
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodess = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodess++;
	}
	return (nodess);
}
