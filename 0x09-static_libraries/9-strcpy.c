#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: pointer to buffer
 * @src: pointer to string
 *
 * Return: character
 */
char *_strcpy(char *dest, char *src)
{
	int u = 0, v;

	while (*(src + u) != '\0')
	{
		u++;
	}
	for (v = 0; v < u; v++)
	{
		dest[v] = src[v];
	}
	dest[u] = '\0';
	return (dest);
}
