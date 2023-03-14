#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free allocated memory
 * @grid: memory to be freed
 * @height: the rows
 *
 * Return: nothing
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
