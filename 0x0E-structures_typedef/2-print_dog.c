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
		d = "";
	if (!(*d).name)
		(*d).name = "(nil)";
	if (!(*d).age)
		(*d).age = "(nil)";
	if (!(*d).owner)
		(*d).owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
