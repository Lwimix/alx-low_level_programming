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
	unsigned int lim, i = 0;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	lim = (sizeof(s1) + sizeof(s2) + 1);
	p_string = malloc(sizeof(char) * lim);
	if (!p_string)
	{
		return (NULL);
	}
	start = p_string;
	while (*s1 != '\0')
	{
		*p_string++ = *s1++;
	}
	while (*s2 != '\0' && i < n)
	{
		*p_string++ = *s2++;
		i++;
	}
	*p_string = '\0';
	return (start);
}
