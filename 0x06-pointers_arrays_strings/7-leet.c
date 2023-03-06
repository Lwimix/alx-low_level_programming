#include <stdlib.h>
#include "main.h"

/**
 * leet - converts special letters to numbers
 * @str: pointer to string
 *
 * Return: converted string.
 */
char *leet(char *str)
{
	int i, j;
	
	char replace[10] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
	char replaced[5] = {'4', '3', '0', '7', '1'};
	
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == replace[j])
			{
				str[i] = replaced[j % 5];
			}
		}
	}
	return (str);
}
