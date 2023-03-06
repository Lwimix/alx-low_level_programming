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
	int i, u = 0;
	unsigned int x = 0;

	while (accept[u] != '\0')
	{
		while (s[i] != '\0')
		{
			if (s[i] == accept[u])
			{
				x++;
				i++;
			}
			i++;
		}
		u++;
	}
	return (x);
}
