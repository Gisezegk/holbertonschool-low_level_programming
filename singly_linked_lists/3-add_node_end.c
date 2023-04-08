#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

list_t
*add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	list_t *current = *head;
	char *str_copy = strdup(str);

	last_node = malloc(sizeof(list_t));

	if (!last_node)
	{
		return (NULL);
	}

	if (str_copy == NULL)
	{
		free(last_node);
		return (NULL);

	}

	last_node->str = str_copy;
	last_node->next = NULL;
	if (!*head)
	{
		*head = last_node;
		return (last_node);
	}

	while (current->next != NULL)
		{
			current = current->next;

		}

	current->next = last_node;

	return (last_node);
}
