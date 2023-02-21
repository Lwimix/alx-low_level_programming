#include <unistd.h>
#include "main.h"

/**
 * main - check code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return 0;
}
void print_alphabet(void)
{
	int u;

	for(u = 'a'; u <= 'z' && u != '\0'; u++)
	{
		write(1, &u, 30);
	}
}
