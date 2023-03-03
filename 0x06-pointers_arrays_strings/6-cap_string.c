#include "main.h"

/**
 * cap_string - capitalize letter after special character
 * @strn: pointer variable
 *
 * Return: capitalized string
 */
#include <stddef.h>

char* cap_string(char* str)
{
	int i = 0;
	int cap_next = 1;
	while (str[i] != '\0')
	{
		if (cap_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		cap_next = 0;
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
		cap_next = 1;
			break;
			default:
			break;
		}
		i++;
	}
	return str;
}
