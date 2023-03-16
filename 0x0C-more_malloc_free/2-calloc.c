#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate specific mem for all type var
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p_space;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p_space = malloc(nmemb * size);
	if (!p_space)
	{
		return (NULL);
	}
	return (p_space);
}
