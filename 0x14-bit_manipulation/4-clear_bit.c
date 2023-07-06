#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - clears bit at index to 0
 * @n: address of number
 * @index: index of bit in number
 *
 * Return: 1 for SUCCESS, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = (unsigned long int) index, u;

	if (n == 0)
		return (0);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	u = *n &= ~(1 << i);
	if (u == *n)
	{
		return (1);
	}
	return (-1);
}
