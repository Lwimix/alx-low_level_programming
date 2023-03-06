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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
