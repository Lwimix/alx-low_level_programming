#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int n;
	int n_end;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_end = n % 10;
	if (n_end > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n_end);
	}
	else if (n_end == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n_end);
	}
	else if (n_end < 6 && n_end != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_end);
	}
	return (0);
}
