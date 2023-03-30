#include <stdio.h>
#include "lists.h"

/**
 * list_len - lists the number of elements in list
 * @h: pointer to the elements
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	list_t *current = (list_t *)h;
	size_t i = 0;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
