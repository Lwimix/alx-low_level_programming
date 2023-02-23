#include "main.h"

/**
 * print_numbers - prints numbers (0-14)
 *
 * Return: 1 for SUCCESS, 0 otherwise
 */
void more_numbers(void)
{
	int in_count;

	for (in_count = 0; in_count < 10; in_count++)
	{
		int count;

		for (count = 0; count <= 14; count++)
		{
			while (count > 9 && count <=14)
			{
				int you;

				for (you = 10; you <= 14; you++)
				{
					_putchar(you + 38);
				}
			}
			_putchar(count + '0');
		}
		_putchar('\n');
	}
}
