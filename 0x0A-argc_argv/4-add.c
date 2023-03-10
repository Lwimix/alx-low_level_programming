#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - entry
 * @argc: number of arguments
 * @argv: actual arguments
 *
 * Return: 0 for SUCCESS
 */
int main(int argc, char *argv[])
{
	int sum = 0, count = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for(; count < argc; count++)
	{
		char *endptr;
		long int num = strtol(argv[count], &endptr, 10);
		if (*endptr != '\0' || num > INT_MAX || num < INT_MIN)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
