#include "main.h"

/**
 * _islower - looks for lowercase alphabet
 * @c: character to be checked
 *
 * Return: 1 for success.
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
