#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - find the checker byte in checked
 * @haystack: checked string
 * @needle: checker string
 *
 * Return: changed string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
