#include "lists.h"

dlistint_t
*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *entry = *head;
	dlistint_t *node = NULL;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if
		(node == NULL)
	{
			free(node);
			return (NULL);
	}

	node->n = n;

	if (entry)
	{
		while (entry->next)
		{
			entry = entry->next;
		}
		entry->next = node;
		node->prev = entry;
	}
	else
	{
		node->prev = NULL;
		*head = node;
	}
	node->next = NULL;

	return (node);
}
