#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: head of the list
 * Return: head node of the data
 */
int pop_listint(listint_t **head)
{
	int hde;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hde = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hde);
}
