#include "main.h"

/**
 * cap_string - capitalize letter after special character
 * @strn: pointer variable
 *
 * Return: capitalized string
 *
char *cap_string(char *strn)
{
	int u = 0;

	while (strn[u] != '\0')
	{
		if (strn[u] == ',' || strn[u] == ';' || strn[u] == '.' ||
				strn[u] == '!' || strn[u] == '\?' ||
				strn[u] == '\"' || strn[u] == '(' ||
				strn[u] == ')' || strn[u] == '{' ||
				strn[u] == '}' || strn[u] == ' ' ||
				strn[u] == '\n')
		{
			u++;
			if (strn[u] >= 97 && strn[u] <= 122)
			{
				strn[u] = strn[u] - 32;
			}
		}
		else if (strn[u] == '\t')
		{
			strn[u] = ' ';
			u++;
			if (strn[u] >= 97 && strn[u] <= 122)
			{
				strn[u] = strn[u] - 32;
			}
		}
		else
		{
			u++;
		}
	}
	return (strn);
}*/
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

