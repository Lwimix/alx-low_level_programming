#include "main.h"
#include <stdio.h>

/**
 * _strstr - find the checker byte in checked
 * @haystack: checked string
 * @needle: checker string
 *
 * Return: changed string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, u;
	for (u = 0; needle[u] != '\0'; u++)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == needle[u] && haystack[i] != ',')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
