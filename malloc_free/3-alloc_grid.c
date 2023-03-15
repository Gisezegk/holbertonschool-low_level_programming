#include "main.h"
#include <string.h>
int
**alloc_grid(int width, int height)
{
	int i, j;
	int **init;

	if
		(width <= 0 || height <= 0)
		{
			return (NULL);
		}
	init = malloc(height * sizeof(int *));
	if (init == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		init[i] = malloc(width * sizeof(int));

		if (init[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(init[j]);
	}
	free(init);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		init[i][j] = 0;
	}
	}
return (init);
}
