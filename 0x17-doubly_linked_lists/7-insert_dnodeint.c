#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at index
 * @h: head of list
 * @idx: index value
 * @n: value to be added
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *ptr = NULL, *new_ptr = NULL;

	if (idx < 0)
		return (NULL);
	new_ptr = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_ptr == NULL)
	{
		printf("Malloc error\n");
		return (NULL);
	}
	new_ptr->n = n;
	new_ptr->prev = NULL;
	new_ptr->next = NULL;
	if (h == NULL)
	{
		*h = new_ptr;
		return (new_ptr);
	}
	ptr = *h;
	while (ptr != NULL && count < idx)
	{
		++count;
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return (NULL);
	new_ptr->prev = ptr->prev;
	new_ptr->next = ptr;
	if (ptr->prev != NULL)
		ptr->prev->next = new_ptr;
	ptr->prev = new_ptr;
	if (idx == 0)
	{
		new_ptr->next = *h;
		*h = new_ptr;
		return (*h);
	}
	return (new_ptr);
}
