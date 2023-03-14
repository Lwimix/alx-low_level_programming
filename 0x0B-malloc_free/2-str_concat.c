#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - add two strings together
 * @s1: first string
 * @s2: second string
 *
 * Return: Added string
 */
char *str_concat(char *s1, char *s2)
{
	char *p_str, *start, *u = s1, *v = s2;
	int i = 0, j, k;

	if ((!s1) || ((!s1) && (!s2)))
	{
		s1 = "";
	}
	if ((!s2) || ((!s1) && (!s2)))
	{
		s2 = "";
	}
	while (*(u + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (*(v + j) != '\0')
	{
		j++;
	}
	k = i + j;
	p_str = (char *) malloc((sizeof(char) * k) + 1);
	if (p_str == NULL)
	{
		return (NULL);
	}
	start = p_str;
	while (*s1 != '\0')
	{
		*p_str++ = *s1++;
	}
	while (*s2 != '\0')
	{
		*p_str++ = *s2++;
	}
	*p_str = '\0';
	return (start);
}
