#include <unistd.h>
#include "main.h"

/**
 * main - check code
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char op[] = "_putchar";

	for (i = 0; op[i] != '\0'; i++)
	{
		_putchar(op[i]);
	}
	_putchar('\n');
	return (0);
}
