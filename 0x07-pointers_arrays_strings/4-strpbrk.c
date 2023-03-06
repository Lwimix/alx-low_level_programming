#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - find the checker byte in checked
 * @s: checked string
 * @accept: checker string
 *
 * Return: changed string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, u;

	for (u = 0; accept[u] != '\0'; u++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == accept[u])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
