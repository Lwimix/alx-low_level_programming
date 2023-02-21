#include <unistd.h>
#include "main.h"

/**
 * alphabet_main - check code
 *
 * Return: Always 0.
 */
int alphabet_main(void)
{
	print_alphabet();
	return (0);
}
/** 
 * print_alphabet - alphabet in lowercase
 * 
 * Return: 0 for SUCCESS
 */
void print_alphabet(void)
{
	char u = 'a';

	while (u <= 'z')
	{
		_putchar(u);
		u++;
	}
	_putchar('\n');
}
