#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add new node at the end of list
 * @head: points to pointer to list
 * @str: actual string
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	
	if (!head)
		return (NULL);
	current = *head;
	while (current && current->next != NULL)
		current = current->next;
	new = (list_t *) malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (!current)
		*head = new;
	else
		current->next = new;
	return (new);
}
