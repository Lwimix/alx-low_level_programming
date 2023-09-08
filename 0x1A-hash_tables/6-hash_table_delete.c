#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size_table, i;
	hash_node_t *ptr = NULL, *temp = NULL;

	if (ht == NULL)
		return;
	size_table = ht->size;
	for (i = 0; i < size_table; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			temp = ptr->next;
			if (ht->array[i] != NULL)
				free_node(ptr);
			if (temp != NULL)
				ptr = temp;
			else
				break;
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
