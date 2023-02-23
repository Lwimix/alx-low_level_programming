#include "main.h"
#include <unistd.h>

/**
 * print_line - prints a line
 * @n: number of times rep
 *
 * Return: 1 for SUCCESS, 0 otherwise
 */
void print_line(int n)
{
	int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
