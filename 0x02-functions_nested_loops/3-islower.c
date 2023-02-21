#include "main.h"

/**
 * lower_main - looks for lowercase alphabet
 *
 * Return: 1 for success.
 */
int _islower(int c)
{
	if ('a'<= c && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
