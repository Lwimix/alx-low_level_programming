#include "main.h"

/**
 * _pow_recursion - returns number power something
 * @x: number value
 * @y: power
 *
 * Return: number power power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * (_pow_recursion(x, --y)));
}
