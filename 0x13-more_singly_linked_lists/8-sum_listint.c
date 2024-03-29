#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum up all data(n) in list
 * @head: node
 *
 * Return: sum of all n
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
