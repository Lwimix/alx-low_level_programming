#include "main.h"
#include <unistd.h>

/**
 * rev_string - reverses string showing original
 * @s: pointer variable
 *
 * Return: nothing.
 *
void rev_string(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}*/

/**
 * print_rev - prints a string in reverse
 * @s: pointer variable to string
 *
 * Return: nothing.
 */

void rev_string(char *s)
{
	int len = 0;
	char *ptr = s;
	
	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}
	ptr--;
	while (s < ptr)
	{
		char temp = *s;
		*s = *ptr;
		*ptr = temp;
		s++;
		ptr--;
	}
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
