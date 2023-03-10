#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: the actual arguments
 *
 * Return: 0 for SUCCESS
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	if (argc)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
