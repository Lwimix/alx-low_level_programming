#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return number of elements in a list
 * @h: the list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	listint_t *current = (listint_t *)h;
	size_t i = 0;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
