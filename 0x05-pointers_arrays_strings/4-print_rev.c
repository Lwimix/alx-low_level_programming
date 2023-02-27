#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer variable to string
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	while (index >= 0)
	{
		/*_putchar(s[index]);*/
		index--;
		_putchar(s[index]);
	}
	_putchar('\n');
}
