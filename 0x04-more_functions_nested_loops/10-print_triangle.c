#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: 1 for SUCCESS, 0 otherwise
 */
void print_triangle(int size)
{
	int in_count;

	for (in_count = 0; in_count < size; in_count++)
	{

		int count;

		for (count = 0; count < size; count++)
		{
			int space = 
			_putchar('#');
		}
		_putchar('\n');
	}
	if(in_count == '\0')
	{
		_putchar('\n');
	}
}
