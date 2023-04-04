#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free up a list
 * @head: list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head, *next;

/*
 *	if (*head == NULL)
 *		return;
 */
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
