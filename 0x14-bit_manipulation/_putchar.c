#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a character
 * @u: character
 *
 * Return: Always 0.
 */
char _putchar(char u)
{
	write(1, &u, 1);
	return (0);
}
