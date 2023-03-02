#include "main.h"

/**
 * print_number - prints integers
 * @n: integer to be printed
 *
 * Return: nothing.
 */
void print_number(int n)
{
	int u, l;

	if (n <= 9)
	{
		_putchar(n + '0');
	}
	else if (n > 9)
	{
		u = n / 10;
		_putchar(u + '0');
		l = n % 10;
		_putchar(l + '0');
	}
	else if (n < 0)
	{
		v = n 
	}
}
