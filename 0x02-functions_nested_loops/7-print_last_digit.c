#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - last digit
 * @u: number
 *
 * Return: last digit
 */
int print_last_digit(int u)
{
	if (u < 0)
	{
		int h = (((u *= -1) % 10) + '0');
		_putchar(h);
		return ((u *= -1) % 10);
	}
	else if (u >= 0)
	{
		int v = (u % 10) + '0';
		_putchar(v);
	}
	return (0);
}
