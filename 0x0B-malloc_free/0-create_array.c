#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create and initialize array
 * @size: size of array
 * @c: character initialized
 *
 * Return: array with c.
 */
char *create_array(unsigned int size, char c)
{
	int i, j = size;
	char *p_size;

	p_size = (char *) malloc(sizeof(char) * j);
	if (j == 0 || p_size == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		p_size[i] = c;
	}
	return (p_size);
}
