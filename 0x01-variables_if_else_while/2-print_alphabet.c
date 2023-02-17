#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
	int n = 'a';

	while (n <= 'z' && n != '\0')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
