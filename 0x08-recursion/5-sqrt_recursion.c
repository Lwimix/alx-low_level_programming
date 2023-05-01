#include "main.h"
int _sqrt_recursive(int n, int i);

/**
 * _sqrt_recursion - square root of a number
 * @n: number input
 *
 * Return: value of integer
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
	if (i * i == n)
	{
		return i;
	}
	else if (i * i > n)
	{
		return -1;
	}
	else
	{
		i++;

		return _sqrt_recursion(n);
	}
			else
		{
			return _sqrt_recursive(n, 1);
		}

}
