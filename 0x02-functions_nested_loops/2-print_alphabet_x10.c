#include "main.h"
/**
 * print_alphabet_x10 - the alphabet ten times
 *
 * Return: The alphabet with newline
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
