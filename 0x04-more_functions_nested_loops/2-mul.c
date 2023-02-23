#include "main.h"
#include <unistd.h>

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 1 for SUCCESS, 0 otherwise
 */
int mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}
/**
 * _putchar - prints a character
 * @u: printed character
 *
 * Return: a character
 */
char _putchar(char u)
{
	write(1, &u, 1);
	return (0);
}
