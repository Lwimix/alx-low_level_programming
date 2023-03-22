#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: string with name
 * @f: pointer to function that prints
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if ((!name) || (!f))
		return;
	(*f)(name);
}
