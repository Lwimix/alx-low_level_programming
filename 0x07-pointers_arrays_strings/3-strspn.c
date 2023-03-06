#include "main.h"

/**
 * _strspn - check and count certain letters in prefix string
 * @s: buffer checked
 * @accept: Letters checked
 *
 * Return: number of bytes of the letters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, u;
	unsigned int x = 0;

	for (u = 0; accept[u] != '\0'; u++)
	{
		for (i = 0; s[i] != ','; i++)
		{
			if (s[i] == accept[u])
			{
				x++;
			}
		}
	}
	return (x);
}
