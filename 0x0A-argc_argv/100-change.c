#include <stdio.h>
#include <stdlib.h>

/**
 * main - least change
 * @argc: number of arguments
 * @argv: actual arguments
 *
 * Return: change
 */
int main(int argc, char *argv[])
{
	int i, j = argc, k, arr[5] ={25, 10, 5, 2, 1};

	for (i = 0; i < 5; )
	{
		for (k = 1; k <= j; k++)
		{
			if (argv[k] >= arr[i])
			{
				int g = (atoi(argv[k]) % arr[i]);

				if (g == 0)
				{
					int u = (atoi(argv[k]) / arr[i]);

					printf("%d", u);
				}
				argv[k] = g;
				i++;
			}
			i++;
		}
	}
}
