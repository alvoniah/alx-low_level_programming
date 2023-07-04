#include "lists.h"
/**
 * insert_nodeint_at_index - inserts the new node
 * @head: head of the list
 * @idx: index of the list
 * @n: integer
 * Return: the address of the new node otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (j = 0; j < idx - 1 && h != NULL; j++)
		{
			h = h->next;
		}
	}
	if (h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}
	return (new);
}
