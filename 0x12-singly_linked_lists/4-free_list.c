#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: beginning of list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *freen, *next;

	freen = head;
	while (freen != NULL)
	{
		next = freen->next;
		free(freen->str);
		free(freen);
		freen = next;
	}
}
