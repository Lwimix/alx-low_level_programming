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
	int i, k = height, **p_arr = grid;

	for (i = 0; i < k; i++)
	{
		free(p_arr[i]);
	}
	free(p_arr);

}
