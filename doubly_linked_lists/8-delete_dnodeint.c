#include "lists.h"

int
delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = *head;
	dlistint_t *prev = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	while (node != NULL && i < index - 1)
	{
		prev = node;
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (-1);

	prev->next = node->next;

	free(node);
	return (1);
}
