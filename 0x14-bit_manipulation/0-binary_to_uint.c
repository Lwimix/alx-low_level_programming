#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary number
 *
 * Return: unsigned int of number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int *num, sum = 0, i, str_len;

	if (b == 0)
		return (0);
	str_len = strlen(b);
	num = (unsigned int *)malloc(str_len * sizeof(unsigned int));
	if (num == NULL)
		return (0);
	for (i = 0; i < str_len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; i < str_len; i++)
	{
		if (b[i] == '0')
			num[i] = 0;
		else
			num[i] = 1;
	}
	for (i = 0; i < str_len; i++)
	{
		sum += pow(2, i) * num[i];
	}
	return (sum);
}
