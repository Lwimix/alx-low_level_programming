#include "main.h"

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 1 for SUCCESS, 0 otherwise
 */
int mul(int a, int b)
{
	int result;

	result = a * b;
	_putchar(result + '0');
	_putchar('\n');
	return (1);
}
