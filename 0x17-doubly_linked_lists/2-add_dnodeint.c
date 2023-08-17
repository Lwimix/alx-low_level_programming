#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of list
 * @head: head of list
 * @n: value of node
 *
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_ptr = NULL;

	new_ptr = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_ptr == NULL)
	{
		printf("Malloc\n");
		return (NULL);
	}
	new_ptr->n = n;
	new_ptr->prev = NULL;
	new_ptr->next = NULL;
	if (head == NULL)
	{
		*head = new_ptr;
		return (*head);
	}
	new_ptr->next = *head;
	*head = new_ptr;
	return (new_ptr);
}
