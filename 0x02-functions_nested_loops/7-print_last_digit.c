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
	int h = (n < 0) ? -1 * (n % 10) : n % 10;
	_putchar(h + '0');
	return h;
}
