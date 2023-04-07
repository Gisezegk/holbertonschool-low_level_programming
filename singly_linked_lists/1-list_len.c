#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t elements = 0;
	const list_t *numb = h;
while (numb)
{

	numb = numb->next;
	elements++;
}
	return (elements);
}
