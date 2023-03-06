#include "main.h"

/**
 * *_memcpy - copy value from diff mem location
 * @dest: destination
 * @src: source
 * @n: number of times to copy
 *
 * Return: updated destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, x, u = 0;

	x = n;

	for (i = 0; i < x; i++)
	{
		dest[u] = src[i];
		u++;
	}
	return (dest);
}
