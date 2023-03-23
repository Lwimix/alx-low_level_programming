#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add all the arguments
 * @n: number of arguments
 * @...: additional arguments
 *
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list call;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(call, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(call, int);
	}
	va_end(call);
	return (sum);
}
