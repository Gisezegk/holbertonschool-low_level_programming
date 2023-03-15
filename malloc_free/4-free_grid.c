#include "main.h"

void
free_grid(int **grid, int height)
{
	grid = malloc(height * sizeof(int *));
	{
		free(grid);
	}
}
