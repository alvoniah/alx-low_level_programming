#include "lists.h"
/**
 * free_listint - free the linked the list
 * @head: the head of the list
 * Return: nothing to return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
