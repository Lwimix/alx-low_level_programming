#include "main.h"

/**
 * jack_bauer - time
 *
 * Return: all time.
 */
void jack_bauer(void)
{
	int i, u;

	for (i = 0; i < 24; i++)
	{
		for (u = 0; u < 60; u++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(u / 10 + '0');
			_putchar(u % 10 + '0');
			_putchar('\n');
		}
	}
}
