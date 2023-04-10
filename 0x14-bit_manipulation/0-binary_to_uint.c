#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary number
 *
 * Return: unsigned int of number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = atoi(b), sum = 0, i, n, j, mult, str_len;

	str_len = strlen(b);
	if (b == NULL)
		return (0);
	for (i = 0; i < str_len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; i < str_len; i++, num /= 10)
	{
		n = num % 10;/*Obtain last digit*/
		if (n == 1)
		{
			if (i == 0)
			{
				sum = 1;
			}
			if (i != 0)
			{
				for (j = 1, mult = 1; j <= i; j++)
					mult *= 2;
				sum += mult;
			}
		}
		else if (n == 0)
			continue;
	}
	return (sum);
}
