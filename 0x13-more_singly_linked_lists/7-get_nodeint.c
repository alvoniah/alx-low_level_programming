#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: head of the list
 * @index: idx of the node
 * Return: nth node otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}
	return (head);
}
