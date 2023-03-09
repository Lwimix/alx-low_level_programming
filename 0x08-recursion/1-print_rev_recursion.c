#include "main.h"
#include <stdlib.h>

/**
 * _print_rev_recursion - reverse a string(b)
 * @s: string input
 *
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	i++;
	print_rev_recursion(s + 1);


}
