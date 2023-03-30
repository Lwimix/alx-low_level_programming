#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to head of list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current = head, *next;
	
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
