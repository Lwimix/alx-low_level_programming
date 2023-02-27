#include "main.h"

/**
 * puts2 - prints a string skipping a character every time
 * @str: pointer to string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
