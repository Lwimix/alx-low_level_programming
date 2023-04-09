#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints number in binary
 * @n: number to convert
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 8;

	while (num < n)
		num *= 16;
	if (num >= n)
	{
		while (num)
		{
			if (num & n)
			{
				_putchar('1');
				num >>= 1;
			}
			if (!(num & n))
			{
				_putchar('0');
				num >>= 1;
			}
		}
	}
}
