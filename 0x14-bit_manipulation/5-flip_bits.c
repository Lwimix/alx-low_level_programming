#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - return number of bits to flip
 * @n: number flipped to
 * @m: number flipped
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 8, orred, bigger;
	int count = 0;

	if (n > m)
		bigger = n;
	else if (n < m)
		bigger = m;
	else
		return (0);
	while (num < bigger)
		num *= 16;
	orred = n ^ m;
	while (num != 0)
	{
		if ((orred & num) != 0)
		{
			count += 1;
		}
		num >>= 1;
	}
	return (count);
}
