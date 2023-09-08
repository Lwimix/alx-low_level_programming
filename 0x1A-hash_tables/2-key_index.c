#include "hash_tables.h"

/**
 * key_index - returns the index of a hashed value
 * @key: the key in our hash table
 * @size: size of our hash table
 *
 * Return: index of our hashed value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = -1, hashed_value = 0;
	/*Check if key is a string on this line*/
	if (size <= 0) /*Implement MAXSIZE and checking if size is int*/
		return (EXIT_FAILURE);
	hashed_value = hash_djb2(key);
	index = hashed_value % size;
	return (index);
}
