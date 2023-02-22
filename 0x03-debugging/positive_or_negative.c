#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * positive_or_negative - positive or zero
 *
 * Return: numbers
 */
void positive_or_negative(int n)
{
	srand(time(0));
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
}
