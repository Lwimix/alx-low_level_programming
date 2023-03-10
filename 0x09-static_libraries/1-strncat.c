#include "main.h"
/*#include <stdio.h>*/

/**
 * _strncat - put strings together
 * @dest: destination point
 * @src: source string
 * @n: number of characters of src
 * Return: added string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *count = dest;

	while (*count != '\0')
	{
		count++;
	}
	while (i < n && *src != '\0')
	{
		*count++ = *src++;
		n--;
	}
	*count = '\0';
	return (dest);
}
