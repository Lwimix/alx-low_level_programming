#include <stdio.h>
#include <stdlib.h>
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
	int num;

	if (*head == NULL)
		return (-1);
	*head = (*head)->next;
	num = current->n;
	free(current);
	return (num);
}
