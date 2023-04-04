#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a list
 * @head: new node
 * @n: element of new node
 *
 * Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head, *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (current == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
