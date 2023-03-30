#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add node at the beginning of list
 * @head: pointer to new node(s)
 * @str: actual strings
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
