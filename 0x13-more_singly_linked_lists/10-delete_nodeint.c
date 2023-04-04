#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at an index of a list
 * @head: node
 * @index: position in list from 0
 *
 * Return: 1 for success, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *current2;
	int count = 0, copy = index;

	if (copy == 0)
	{
		current->next = *head;
		*head = current;
	}
	for (; current != NULL && count < copy - 1;
			current = current->next, count++)
		;
	current2 = current->next;
	current->next = current2->next;
	if (!(current->next == current2->next))
		return (-1);
	return (1);
}
