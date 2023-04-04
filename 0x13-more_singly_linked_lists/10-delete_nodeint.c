#include <stdio.h>
#include <stdlib.h>
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
	
	if (*head == NULL || copy < 0)
		return (-1);
	if (copy == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (; current != NULL && count < copy - 1;
			current = current->next, count++)
		;
	if (current == NULL || current->next == NULL)
		return (-1);
	current2 = current->next;
	current->next = current2->next;
	free(current2);
	return (1);
}
