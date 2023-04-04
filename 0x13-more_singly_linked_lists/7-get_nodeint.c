#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: node
 * @index: index of node from 0
 *
 * Return: indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	for (; current != NULL && i < index; current = current->next, i++)
		;
	return (current);
}
