#include "main.h"

/**
 * cap_string - capitalize letter after special character
 * @strn: pointer variable
 *
 * Return: capitalized string
 */
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
		}
		else
		{
			u++;
		}
	}
	return (strn);
}
