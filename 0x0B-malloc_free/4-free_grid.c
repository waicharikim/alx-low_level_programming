#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a 2-d grid created by alloc_grid
 * @grid: 2-d array
 * @height: rows of the 2-d array
 *
 * Return: void
 */
void free_grid( int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
