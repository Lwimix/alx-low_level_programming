#include <unistd.h>
int _putchar();

/**
 * _putchar - prints '_putchar'
 *
 * Return: Always 0.
 */
int _putchar()
{
	write(1, "_putchar\n", 9);
	return (0);
}
