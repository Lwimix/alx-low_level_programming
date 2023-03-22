#include "function_pointers.h"

/**
 * array_iterator - execute function on each element of array
 * @array: array input
 * @size: size of array
 * @action: pointer to executed function
 *
 * Return: nothing
 */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	if ((!array) || (!action) || (!size))
		return;
	for (i = 0; i < size; i++)
	{
		if (array[i])
			(*action)(array[i]);
	}
}
