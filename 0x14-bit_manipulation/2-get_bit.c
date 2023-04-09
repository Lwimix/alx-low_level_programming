#include <stdio.h>
#include "main.h"

/**
 * get_bit - return bit at index
 * @n: number checked
 * @index: position of bit
 *
 * Return: value at index, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (!(n & 1 << index))
		return (0);
	if (n & 1 << index)
		return (1);
	return (-1);
}
