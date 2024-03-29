#include "lists.h"

dlistint_t
*add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
