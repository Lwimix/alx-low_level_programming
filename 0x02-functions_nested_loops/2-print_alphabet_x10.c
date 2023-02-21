#include "main.h"
/**
 * main - check code
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char u;

	for (i = 0; i < 10; i++)
	{
		u = 'a';
		while (u <= 'z')
		{
			_putchar(u);
			u++;
		}
		_putchar('\n');
	}
}
