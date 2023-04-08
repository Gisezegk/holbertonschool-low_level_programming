#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void
free_list(list_t *head)
{
	if (!head)
	{
		free(head);
		return;
	}

	free_list(head->next);


	if (head->str)
		free(head->str);

	free(head);
}
