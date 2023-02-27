#include "main.h"

/**
 * puts2 - prints a string skipping a character every time
 * @str: pointer to string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
