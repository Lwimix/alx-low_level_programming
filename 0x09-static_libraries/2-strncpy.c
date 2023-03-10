#include "main.h"

/**
 * _strncpy - copies strings
 * @dest: destination point
 * @src: source of string
 * @n: number of times to copy
 *
 * Return: cpoied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
