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
	int h = (u < 0) ? -1 * (u % 10) : u % 10;
	_putchar(h + '0');
	return h;
}
