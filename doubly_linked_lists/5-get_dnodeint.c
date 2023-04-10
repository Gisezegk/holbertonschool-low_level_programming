#include "lists.h"

dlistint_t
*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	if (head == NULL)
		return (NULL);

	while (node->next != NULL && i < index)
	{
		node = node->next;
		i++;
	}
	if (i != index)
		return (NULL);

	return (node);
}
