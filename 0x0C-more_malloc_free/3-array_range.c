#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - allocate space for range
 * @min: start
 * @max: stop
 *
 * Return: space for int
 */
int *array_range(int min, int max)
{
	int *p_int_space, *start, count, i, j = 0;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min, count = 0; i <= max; i++, count++)
	{
		;
	}
	p_int_space = (int *) malloc(sizeof(int) * count);
	start = p_int_space;
	if (!p_int_space)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		p_int_space[j++] = i;
	}
	return (start);
}
