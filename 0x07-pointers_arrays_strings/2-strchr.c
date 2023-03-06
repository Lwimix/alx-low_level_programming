#include "main.h"
#include <stdio.h>

/**
 * _strchr - looking for a char in a string
 * @s: source string
 * @c: char check
 *
 * Return: string beginning from char
 */
char *_strchr(char *s, char c)
{
	int v;

	for (v = 0; s[v] != '\0'; v++)
	{
		if (s[v] == c)
		{
			return (s + v);
		}
	}
	return (NULL);
}
