#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements in a list
 * @h: pointer to element
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	list_t *current = (list_t *)h;
	size_t i = 0;

	if (h == NULL)
		return (0);
	if (!current->str)
	{
		current->str = "(nil)";
		current->len = 0;
	}
	if (current != NULL)
	{
		while (current != NULL)
		{
			i++;
			printf("[%u] %s\n", current->len, current->str);
			current = current->next;
		}
	}
	return (i);
}
