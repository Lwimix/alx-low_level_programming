#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string arguments
 * @separator: marker for strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list call;
	unsigned int i;
	char *u, *end;

	va_start(call, n);
	for (i = 0; i < n - 1; i++)
	{
		u = va_arg(call, char *);
		if (u == NULL)
			printf("(nil) ");
		printf("%s,", u);
		if (separator != NULL && i < n - 2)
			printf("%s", separator);
	}
	end = va_arg(call, char *);
	if (end == NULL)
		printf("(nil)");
	printf("%s\n", end);
}
