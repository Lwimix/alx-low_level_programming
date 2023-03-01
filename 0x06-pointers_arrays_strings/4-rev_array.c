#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * reverse_array - reverse an array of integers
 * @a: pointer variable
 * @n: elements of array
 *
 * Return: nothing
 */

/**
 * _putchar - prints a character
 *
 * Return: Always 0.
 */
char _putchar(char u)
{
	write(1, &u, 1);
	return (0);
}

void reverse_array(int *a, int n)
{
	int count;
	for (count = 0; /*a[count] != '\0' &&*/ count < n; count = count + 1)
	{
		;
	}
	printf("%d is the count\n", count);
	while (count >= 0)
	{
		_putchar(a[count]);
		count--;
	}
}
