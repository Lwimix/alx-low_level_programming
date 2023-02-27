#include "main.h"

/**
 * _print_rev - prints a string in reverse
 * @s: pointer variable to string
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index - 1] != s[index])
	{
		_putchar(s[index]);
		index--;
	}
}
