#include "main.h"
/**
 * free_grid - a function  frees a 2 dimensional grid
 * @grid: 2D array
 * @height: array height
 * Return: Nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
