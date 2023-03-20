#include "dog.h"

/**
 * init_dog - give dog attributes
 * @d: pointer to instance
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
