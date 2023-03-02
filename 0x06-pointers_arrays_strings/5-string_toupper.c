#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: pointer variable
 *
 * Return: Uppercase characters
 */
char *string_toupper(char *s)
{
	int i = 97, count = 0;

	while (i < 123)
	{
		if (s[count] >= 97 && s[count] <= 122)
		{
			s[count] = s[count] - 32;
		}
		i++;
		count++;
	}
	return (s);
}
