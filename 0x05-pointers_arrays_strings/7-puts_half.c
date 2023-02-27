#include "main.h"

/**
 * puts_half - prints half a string
 * @str: pointer variable
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int index = 0;

	while (str != '\0')
	{
		str[index] = _strlen(str) / 2;
	}
}
