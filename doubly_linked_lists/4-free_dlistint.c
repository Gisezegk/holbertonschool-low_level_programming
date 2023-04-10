#include "lists.h"

void
free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	else
	{
		if (head->next != NULL)
			free_dlistint(head->next);
		free(head);
	}
}
