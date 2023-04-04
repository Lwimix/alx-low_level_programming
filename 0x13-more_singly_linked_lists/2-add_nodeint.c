#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add new node to the start of a list
 * @head: new node
 * @n: element of new node
 *
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
