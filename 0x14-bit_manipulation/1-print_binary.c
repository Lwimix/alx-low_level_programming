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
	unsigned long int num = 8, test = 0, test_0 = 0;

	while (num <= n)
		num *= 16;
	while (num != 0)
	{
		if (num & n)
		{
			_putchar('1');
			test = 1;
		}
		else
		{
			if (test == 1)
			{
				_putchar('0');
				test_0 = 1;
			}
		}
		num >>= 1;
	}
	if (num == 0 && test_0 == 0 && test == 0)
		_putchar('0');
}
