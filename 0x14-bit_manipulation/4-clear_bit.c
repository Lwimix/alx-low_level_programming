#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - clears bit at index to 1
 * @n: address of number
 * @index: index of bit in number
 *
 * Return: 1 for SUCCESS, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = (unsigned long int) index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if ((*n & ~(1 << i)) == 0)
	{
		*n &= ~(1 << i);
		return (1);
	}
	return (-1);
}
