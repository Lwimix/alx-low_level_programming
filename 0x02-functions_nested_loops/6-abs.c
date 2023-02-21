#include "main.h"

/**
 * _abs - gives the absolute value
 * @int: number to be absolved
 *
 * Return: absolved number.
 */
int _abs(int a)
{
	if (a < 0)
	{
		return a * -1;
	}
	else
	{
		return a;
	}
}
