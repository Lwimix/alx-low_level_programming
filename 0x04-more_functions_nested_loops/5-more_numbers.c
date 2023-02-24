#include "main.h"

/**
 * more_numbers - prints numbers (0-9)
 *
 * Return: 1 for SUCCESS, 0 otherwise
 */
void more_numbers(void)
{
	int i, j;
	/**/
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)  /* Print the tens digit */
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
			else
			{
				_putchar(j + '0');
			}
		}
		_putchar('\n');
	}
}

