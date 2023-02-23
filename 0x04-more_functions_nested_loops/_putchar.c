#include <unistd.h>
char _putchar(char);

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
