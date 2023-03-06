#include "main.h"

/**
 * print_diagsums - print diagonal sums
 * @a: matrix arrays
 * @size: size of matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int r, c, u, add, sum;
	int *cp;

	u = size;
	c = size--;
	cp = a;
	for (r = 0; r < u; r++)
	{
		add = a[r][c];
		sum = *cp + add;
		c--;
	}
	_putchar(sum);
}
