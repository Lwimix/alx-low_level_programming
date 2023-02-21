#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 for SUCCESS
 */
int main(void)
{
	int u = 'a';

	while (u <= 'z' && u != '\0')
	{
		if (u == 'q' || u == 'e')
		{
			u++;
		}
		else
		{
			putchar(u);
			u++;
		}
	}
	putchar('\n');
	return (0);
}
