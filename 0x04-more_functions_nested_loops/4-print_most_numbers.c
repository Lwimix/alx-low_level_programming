#include "main.h"

/**
 * print_numbers - prints numbers (0-9), no 2 or 4
 *
 * Return: 1 for SUCCESS, 0 otherwise
 */
void print_most_numbers(void)
{
	int count;

	count = 0;
	while (count <= 9)
	{
		if (count != 2 && count != 4)
		{
			_putchar(count + '0');
			count++;
		}
		else
		{
			count++;
		}
	}
	_putchar('\n');
}
