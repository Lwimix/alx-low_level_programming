#include "main.h"

/**
 * print_numbers - prints numbers (0-9)
 *
 * Return: 1 for SUCCESS, 0 otherwise
 */
void print_numbers(void)
{
	int count;

	count = 0;
	while (count <= 9)
	{
		_putchar(count + '0');
		count++;
	}
	_putchar('\n');
}
