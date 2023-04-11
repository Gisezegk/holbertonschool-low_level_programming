#include "lists.h"

dlistint_t
*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *p = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (p && i < idx - 1)
	{
		p = p->next;
		i++;

	}
if (p == NULL)
{
	free(new_node);
	return (NULL);
}
	new_node->prev = p;
	new_node->next = p->next;

	if (p->next)
		p->next->prev = new_node;

	p->next = new_node;
	return (new_node);
}
