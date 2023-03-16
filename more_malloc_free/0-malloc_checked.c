#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void
*malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
	fprintf(stderr, "malloc failed, terminating process with status 98\n");
        exit(98);
	}
	return (p);
}
