#include "main.h"

/**
 * _memset - replace values in memory
 * @s: buffer
 * @b: replacement
 * @n: no of times to replace
 *
 * Return: replaced buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i, x, u = 0;

	x = n;

	for (i = 0; i < x; i++)
	{
		s[i] = b;
		s[u] = s[i];
		u++;
	}
	return (s);
}
