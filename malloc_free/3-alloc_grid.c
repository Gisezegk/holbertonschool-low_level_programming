#include "main.h"
#include <string.h>
int
**alloc_grid(int width, int height)
{
	int i;
	int **init;
	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	init = malloc(width * height * sizeof(int));
	

if (init == NULL)
{
	return (NULL);
}

	for (i = 0; i < height; i++)
	{
	init[i] = malloc(width * height * 0);
	}
init[i] = '\0';
return (init);

}
