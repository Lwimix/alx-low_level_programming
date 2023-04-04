#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements of a list
 * @h: list
 *
 * Return: number of list elements
 */
size_t print_listint(const listint_t *h)
{
	listint_t *current = (listint_t *)h;
	size_t i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
