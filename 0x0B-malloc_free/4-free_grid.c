#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Function to free a 2 dimensional grid
 * @grid: Grid to free
 * @height: of the grid
 * Return: Without return
 */

void free_grid(int **grid, int height)
{
	int c;

	if (grid != NULL && height != 0)
	{
		for (c = 0; c <= height; c++)
			free(grid[c]);
		free(grid);
	{
}
