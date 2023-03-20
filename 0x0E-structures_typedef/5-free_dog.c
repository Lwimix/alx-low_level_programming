#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free up memory for dogs
 * @d: pointer to dog
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
