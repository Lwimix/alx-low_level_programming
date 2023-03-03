#include "main.h"

/**
 * cap_string - capitalize letter after special character
 * @strn: pointer variable
 *
 * Return: capitalized string
 */
char *cap_string(char *strn)
{
	int i, j;
	
	int marks[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40,
			41, 123, 125};
	for (i = 0; strn[i] != '\0'; i++)
		{
			for (j = 0; j < 13; j++)
				{
					if (strn[i] == marks[j])
						{
							strn[i + 1] = strn[i + 1]
							 - 32;
						}
				}
		}
		return (strn);
}
