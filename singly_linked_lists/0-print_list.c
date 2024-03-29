#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t
print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);

		count++;
		current = current->next;
	}
return (count);
}
