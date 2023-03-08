#include "main.h"

/**
 * _strlen_recursion - prints string length
 * @s: string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int u;

	u = 0;
	if (*s == '\0')
	{
		return (0);
	}
	u++;
	_strlen_recursion(s++);
	return (u);
}
