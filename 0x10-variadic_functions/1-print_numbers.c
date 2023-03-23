#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string put between numbers
 * @n: number of integer arguments
 * @...: more arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list call;
	unsigned int i;

	va_start(call, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(call, int));
		if ((i < n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(call);

}
