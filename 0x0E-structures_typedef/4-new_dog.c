#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - create a new dog record
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoop = malloc(sizeof(dog_t));

	if (!snoop)
		return (NULL);
	snoop->name = malloc(sizeof(char) * sizeof(name) + 1);
	if (!snoop->name)
	{
		free(snoop);
		return (NULL);
	}
	strcpy(snoop->name, name);
	snoop->age = age;
	snoop->owner = malloc(sizeof(char) * sizeof(owner) + 1);
	if (!snoop->owner)
	{
		free(snoop->name);
		free(snoop);
		return (NULL);
	}
	strcpy(snoop->owner, owner);
	return (snoop);
}
