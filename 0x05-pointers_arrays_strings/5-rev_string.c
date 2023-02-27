#include "main.h"
#include <unistd.h>

/**
 * rev_string - prints a string in reverse
 * @s: pointer variable to string
 *
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i])
		i++;
	}
	_putchar('\n');
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
