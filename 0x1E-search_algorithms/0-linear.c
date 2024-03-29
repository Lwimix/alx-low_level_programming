#include<stdio.h>
/**
 * linear_search - loops from the first element until it finds the value
 * @array: pointer to first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
