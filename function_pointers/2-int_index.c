#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int
int_index(int *array, int size, int (*cmp)(int))
{


	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
		}

	for (i = 0; i < size; i++)
{
	cmp(array[i]);

	if (cmp(array[i]) != 0)
	{
	return (i);

		}
}
	return (-1);

}
