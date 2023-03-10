#include "main.h"

/**
 * _strlen - returns length of string
 * @s: checked string
 *
 * Return: nothing.
 */
int _strlen(char *s)
{
	int u;

	u = 0;
	while (*s != '\0')
	{
		s++;
		u++;
	}
	return (u);
}
