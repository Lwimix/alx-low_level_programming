#include "main.h"

/**
 * _print_rev - prints a string in reverse
 * @s: pointer variable to string
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
		/*while (*s != '\0')
		{
			_putchar(*s);
			s++;
		}*/
		char u;

		for(u = _strlen(*s) -1; u >= 0; u--)
		{
			_putchar(*s);
		}
	_putchar('\n');
}
