#include "main.h"
#include <stdio.h>
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
		putchar(s[i]);
		i++;
	}
	putchar('\n');
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
