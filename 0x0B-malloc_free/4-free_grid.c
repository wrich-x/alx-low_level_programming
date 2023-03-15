#include "main.h"
#include <stdlib.h>

/**
  * free_grid - a function that frees a 2 dimensional grid
  * @grid: address of 2d grid
  * @height: height of the grid
  *
  * Return: null
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
