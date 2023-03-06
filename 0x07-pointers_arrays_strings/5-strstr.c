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
	int i, u, j, l;

	j = strlen(haystack);
	l = strlen(needle);
	for (u = 0; u < l; u++)
	{
		for (i = 0; i < j; i++)
		{
			if (haystack[i] == needle[u])
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
