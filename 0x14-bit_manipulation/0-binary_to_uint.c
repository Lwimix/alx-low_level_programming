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
	unsigned int num = atoi(b), sum = 0, i, n, j, mult;

	for (i = 0; i < strlen(b); i++, num /= 10)
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
		if (n == 0)
			continue;
	}
	return (sum);
}
