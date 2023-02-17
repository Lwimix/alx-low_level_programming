#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 for SUCCESS
 */
int main(void)
{
	int am = 'z';

	while (am >= 'a' && am != '\0')
	{
		putchar(am);
		am--;
	}
	putchar('\n');
	return (0);
}
