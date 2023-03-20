#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print my dog attributes
 * @d: pointer to instance
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!(*d).name)
		(*d).name = "(nil)";
	if (!(*d).age)
		(*d).age = 0.0;
	if (!(*d).owner)
		(*d).owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
