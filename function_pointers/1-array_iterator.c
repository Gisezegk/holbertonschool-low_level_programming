#include <stdio.h>
#include <stdlib.h>

void
array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size && array && action && size; i++)
	{
		(*action)(array[i]);
	}
}
