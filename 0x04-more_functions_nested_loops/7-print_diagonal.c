#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times rep
 *
 * Return: 1 for SUCCESS, 0 otherwise
 */
void print_diagonal(int n)
{
	int a;
	int g;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)
	{
		for (g = 0; g < a; g++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
