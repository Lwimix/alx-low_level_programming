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
	va_list args;
	int i = 0;
	float f = 0.0f;
	char c = '\0';
	char *s = NULL;
	int count = 0;

	va_start(args, format);
	while (format && format[count])
	{
		switch (format[count])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
		}
		count++;
		if (format[count])
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
