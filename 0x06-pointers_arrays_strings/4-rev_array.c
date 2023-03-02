#include "main.h"
#include <unistd.h>

/**
 * reverse_array - reverse an array of integers
 * @a: pointer variable
 * @n: elements of array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int count, i, u;

	for (count = 0, i = n - 1; count < i; count++, i--)
	{
		u = a[count];
		a[count] = a[i];
		a[i] = u;
	}
}
