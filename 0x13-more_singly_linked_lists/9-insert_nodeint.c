#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at an index pos
 * @head: node
 * @idx: position in the list
 * @n: value of inode
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *new;
	int count = 0, copy = idx;

	if (*head == NULL)
		return (NULL);
	for (; current != NULL && count < copy - 1; current = current->next, count++)
		;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = current->next;
	current->next = new;
	return (new);
}
