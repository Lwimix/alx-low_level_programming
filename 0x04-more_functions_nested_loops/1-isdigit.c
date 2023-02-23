#include "main.h"

/**
 * _isdigit - checks for a digit (0-9)
 * @c: digit chcked
 *
 * Return: 1 for SUCCESS, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 9)
	{
		_putchar(c + '0');
		return (1);
	}
	else
	{
		return (0);
	}
}
