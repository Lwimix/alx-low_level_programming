#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - add two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from second
 *
 * Return: added string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p_string, *start;
	unsigned int lim, i = 0, m, j = 0;

	lim = (sizeof(*s1) + (sizeof(*s2) - 1));
	m = (sizeof(*s1) - 1);
	p_string = malloc(lim);
	if (!p_string)
	{
		return (NULL);
	}
	start = p_string;
	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	if (((s1 != NULL) && (s2 != NULL)) || (!s1) || (!s2))
	{
		while (j < m)
		{
			*p_string++ = *s1++;
		}
		while (i < n)
		{
			*p_string++ = s2[i];
		}
		return (start);
	}
	return (NULL);
}
