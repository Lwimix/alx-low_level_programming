#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list
 * @index: index of node for deletion
 *
 * Return: 1 for SUCCESS, -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr = NULL;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		if (ptr->next != NULL)
			ptr->next->prev = NULL;
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (ptr != NULL)
	{
		if (count == index)
		{
			if (ptr->next == NULL)
				return (-1);
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			free(ptr);
			ptr = NULL;
			return (1);
		}
		ptr = ptr->next;
	}
	return (-1);
}
