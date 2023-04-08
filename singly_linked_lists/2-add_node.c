#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

list_t
*add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!head)
	{
		return (NULL);
		}
		if (!new_node)
		{
			return (NULL);
		}
	new_node->str = strdup(str);
	new_node->next = *head;
	new_node->len = strlen(str);

	*head = new_node;

	return (*head);
}
