#include "lists.h"
/**
 * free_listp2 - frees the list
 * @head: head of the list
 * Return: nothing to return
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * free_listint_safe - free the linked list
 * @h: head of the list
 * Return: size of the list freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodess = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nodess);
			}
		}
		curr = *h;
		*h = (*h)->next;
		free(curr);
		nodess++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (nodess);
}
