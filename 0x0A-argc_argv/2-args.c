#include <stdio.h>

/**
 * main - entry
 * @argc: number of arguments
 * @argv: actual arguments
 *
 * Return: 0 for SUCCESS
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
