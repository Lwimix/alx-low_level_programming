#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create a 2D array
 * @width: width of array
 * @height: height of array
 *
 * Return: 2D array pointer
 */
int **alloc_grid(int width, int height)
{
	int **p_arr, i, j;

	if (width == 0 || width < 0 || height == 0 || height < 0)
	{
		return (NULL);
	}
	p_arr = (int **) malloc(sizeof(int *) * height);
	if (p_arr == NULL)
	{
		free(p_arr);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		p_arr[i] = (int *) malloc(sizeof(int) * width);
		if (p_arr == NULL)
		{
			for (j = i - 1; j >= 0; j--)
			{
				free(p_arr[j]);
			}
			free(p_arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p_arr[i][j] = 0;
		}
	}
	return (p_arr);
}
