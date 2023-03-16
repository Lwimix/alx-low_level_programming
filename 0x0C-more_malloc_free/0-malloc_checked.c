#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory for all var called
 * @b: number of bytes allocated
 *
 * Return: pointer to space
 */
void *malloc_checked(unsigned int b)
{
	void *p_space;

	p_space = malloc(b);
	if (p_space == NULL)
	{
		exit(98);
	}
	return (p_space);
}
