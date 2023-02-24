#include "main.h"

/**
 * more_numbers - prints numbers (0-9)
 *
 * Return: 1 for SUCCESS, 0 otherwise
 */
void more_numbers(void)
{
	int count;

	count = 0;
	while (count <= 14)
	{
		if (count <= 9)
		{
			_putchar(count + '0');
			count++;
		}
		else
		{
			int made = 49 + 49;

			_putchar(made + '0');
			count++;
		}
	}
	_putchar('\n');
}
