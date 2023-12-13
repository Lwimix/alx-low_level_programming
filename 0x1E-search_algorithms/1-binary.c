#include<stdio.h>
/**
 * binary_search - divides search in half until it finds the value
 * @array: pointer to first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0, stop = size - 1;
	int center = 0, i = 0;

	if (array == NULL)
		return (-1);
	while (start <= stop)
	{
		center = start + (stop - start) / 2;
		printf("Searching in array: ");
		for (i = start; i <= stop; i++)
		{
			if (i == stop)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[center] == value)
			return (center);
		else if (array[center] < value)
			start = center + 1;
		else
			stop = center - 1;
	}
	return (-1);
}
