#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: list
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;

	if (*head == NULL)
		return (-1);
	*head = (*head)->next;
	return (current->n);
}
