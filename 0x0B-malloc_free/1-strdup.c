#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string with malloc
 * @str: the string
 *
 * Return: duplicate string
 */
char *_strdup(char *str)
{
	char *p_str, *u = str, *start;
	int i = 0, j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(u + i) != '\0')
	{
		i++;
	}
	p_str = (char *) malloc((sizeof(char) * i) + 1);
	if (str == NULL || p_str == NULL)
	{
		return (NULL);
	}
	start = p_str;
	for (j = 0; *str != '\0'; j++)
	{
		*p_str++ = *str++;
	}
	*p_str = '\0';
	return (start);
}
