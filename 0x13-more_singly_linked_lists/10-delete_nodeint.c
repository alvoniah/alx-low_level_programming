#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node of list
 * @head: the head of the list
 * @index: idx of the list deleted
 * Return: 1 otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (j = 0; j < index - 1 && prev != NULL; j++)
		{
			prev = prev->next;
		}
	}
	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}
	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}
	return (1);
}
