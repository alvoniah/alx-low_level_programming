#include "lists.h"
/**
 * reverse_listint - reverses the list
 * @head: head of the list
 * Return: pointer to the 1st node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *k;
	listint_t *m;

	k = NULL;
	m = NULL;

	while (*head != NULL)
	{
		m = (*head)->next;
		(*head)->next = k;
		k = *head;
		*head = m;
	}
	*head = k;
	return (*head);
}
