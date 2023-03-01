#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: pointer variable
 *
 * Return: Uppercase characters
 */
char *string_toupper(char *s)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		*s++ = n - 32;
	}
	return (0);
}
