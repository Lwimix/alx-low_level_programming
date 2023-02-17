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
	int n_last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_last = n % 10;
	if (n_last > 5)
	{
		printf("Last  digit of %d is %d and is greater than 5\n", n, n_last);
	}
	else if (n_last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n_last);
	}
	else if (n_last < 6 && n_last != 0)
	{
		printf("Last digit of %d is %d and is less than six and not zero\n", n, n_last);
	}
	return (0);
}
