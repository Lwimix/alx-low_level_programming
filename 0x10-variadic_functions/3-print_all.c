#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of all arguments passed
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list call;

	typedef struct cont {
		char sign;
		char * print;
	}sig;
	va_start (call, format);

	sig store [] = {
		{'c', printf("%c, ", va_arg (call, char))},
		{'c', printf("%c, ", va_arg (call, char))},
		{'c', printf("%c, ", va_arg (call, char))},
		{'c', printf("%c, ", va_arg (call, char))}
	}
}
