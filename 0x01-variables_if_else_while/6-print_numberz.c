#include <stdio.h>

/**
 * main - entry point
 *
 * Return: - 0 for SUCCESS
 */
int main(void)
{
	int num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
