#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 for SUCCESS
 */
int main(void)
{
	int u = '0';

	while (u <= '9' && u != '\0')
	{
		putchar(u);
		if (u != '9')
		{
			putchar(',');
			putchar(' ');
		}
		u++;
	}
	putchar('\n');
	return (0);
}
