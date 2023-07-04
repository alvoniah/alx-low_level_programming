#include "lists.h"
/**
 * sum_listint - returns the sum
 * @head: head of the list
 * Return: sum of the n
 */
int sum_listint(listint_t *head)
{
	int count;

	count = 0;
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
