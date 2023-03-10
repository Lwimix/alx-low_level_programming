#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: actual arguments
 *
 * Return: 0 for SUCCESS
 */
int main(int argc, char *argv[])
{
	int multiplication, i;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		multiplication = atoi(argv[1]) * atoi(argv[2]);
	}
		printf("%d\n", multiplication);
		return (0);
}
