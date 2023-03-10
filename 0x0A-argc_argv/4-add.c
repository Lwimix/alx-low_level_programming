#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: number of arguments
 * @argv: actual arguments
 *
 * Return: 0 for SUCCESS
 */
int main(int argc, char *argv[])
{
	int sum = 0, count = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (atoi(argv[count]) >= 'a' && atoi(argv[count]) <= 'z')
	{
		printf("Error\n");
	}
	if ()
	for(; count < argc; count++)
	{
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
