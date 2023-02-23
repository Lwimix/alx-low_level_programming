#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 *
 * Return: 1 for SUCCESS, 0 otherwise
 */
void print_square(int size)
{
	int in_count;

	for (in_count = 0; in_count < size; in_count++)
	{

		int count;

		for (count = 0; count < size; count++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (in_count == '\0')
	{
		_putchar('\n');
	}
}
