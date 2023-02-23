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
	int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		else
		{
			char slash = '\\';
			_putchar(slash);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
