#include "main.h"

/**
 * swap_int - swaps integer values
 * @a: first integer
 * @b: second integer
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
