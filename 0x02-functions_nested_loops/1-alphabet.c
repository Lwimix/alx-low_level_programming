#include <unistd.h>
#include "main.h"

/**
 * main - check code
 *
 * Return: Always 0.
 */
int alphabet_main(void)
{
	print_alphabet();
	return 0;
}
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

