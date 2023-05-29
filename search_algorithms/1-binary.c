#include "search_algos.h"

void
auxprint(int *array, int i, int ls)
{
	int pres;

	printf("Searching in array: ");
	for (pres = i; pres <= ls; pres++)
	{
		if (pres > i)
			printf(", ");
		printf("%i", array[pres]);
	}
	printf("\n");
}




int
binary_search(int *array, size_t size, int value)
{
	int i = 0, li = size - 1, m = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (i <= li)
	{
		auxprint(array, i, li);
		m = (i + li) / 2;

		if (array[m] == value)
			return (m);

		else if (array[m] < value)
			i = m + 1;

		else
		{
			li = m - 1;
		}
	}
	return (-1);
}
