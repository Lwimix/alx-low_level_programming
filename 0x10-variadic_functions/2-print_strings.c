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

	va_start(call, n);
	for (i = 0; i < n - 1; i++)
	{
		/**
		 *  if (va_arg (call, char *) == NULL)
		 *  printf("(nil)");
		 */
		if (separator == NULL)
			printf("%s ", va_arg(call, char *));
		printf("%s%c ", va_arg(call, char *), *separator);
	}
	printf("%s\n", va_arg(call, char *));
}
