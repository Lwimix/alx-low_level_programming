#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: input array searched
 * @size: number of elements of array
 * @cmp: pointer to function executed
 *
 * Return: element index, -1 if otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((!array) || (!cmp) || (size <= 0))
		return (-1);
	i = 0;
	while (i < size)
	{
		if ((cmp)(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
