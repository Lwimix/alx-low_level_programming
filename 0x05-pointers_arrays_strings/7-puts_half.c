#include "main.h"

/**
 * puts_half - prints half a string
 * @str: pointer variable
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int index = 1, u, v;

	while (str[index] != '\0')
	{
		index++;
	}
	if (index % 2 == 0)
	{
		u = index / 2;
		while (str[u] != '\0')
		{
			_putchar(str[u]);
			u++;
		}
	}
	else
	{
		v = (index - 1) / 2;
		while (str[v] != '\0')
		{
			_putchar(str[v]);
			v++;
		}
	}
	_putchar('\n');
}
