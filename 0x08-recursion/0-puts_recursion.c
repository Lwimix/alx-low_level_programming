#include "main.h"
#include <stdlib.h>

/**
 * _puts_recursion - printout  a string
 * @s: input string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		exit(1);
	}
	_putchar(*s);
	_puts_recursion(s++);
}
