#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 for SUCCESS
 */
int main(void)
{
	int num;
	for (num = 1; num <= 100; num++)
	{
		if((num % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else if (((num % 3) == 0) && ((num % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", num);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
