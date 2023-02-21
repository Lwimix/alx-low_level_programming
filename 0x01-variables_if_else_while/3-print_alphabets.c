#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 for SUCCESS
 */
int main(void)
{
	int m = 'a';
	int n = 'A';

	while (m <= 'z' && m != '\0')
	{
		putchar(m);
		m++;
	}
	while (n <= 'Z' && n != '\0')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
