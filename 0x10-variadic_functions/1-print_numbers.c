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
	for (i = 0; i < n - 1; i++)
	{
		if (separator == NULL)
			printf("%d ", va_arg(call, unsigned int));
		printf("%d%c ", va_arg(call, unsigned int), *separator);
	}
	printf("%d\n", va_arg(call, unsigned int));
	va_end(call);

}
