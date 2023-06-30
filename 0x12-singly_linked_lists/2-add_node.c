#include "lists.h"
/**
 * add_node - adds the new node
 * @head: head of the linked
 * @str: str to store the list
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nch;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nch = 0; str[nch]; nch++)
		;
	new->len = nch;
	new->next = *head;
	*head = new;

	return (*head);
}
