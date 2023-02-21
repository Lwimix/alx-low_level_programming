#include "main.h"

/**
 * print_last_digit - last digit
 * @u: number
 *
 * Return: last digit
 */
int print_last_digit(int u)
{
	int last = u % 10;

	if (last < 0)
	{
		last = last * -1;
		_putchar(last + '0');
		return (last);
	}
	_putchar(u + '0');
	return (u);
}
