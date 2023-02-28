#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * rev_string - prints a string in reverse
 * @s: pointer variable to string
 *
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i = 0, j, k;

	char *new_str;

	while (s[i] != '\0')
	{
		i++;
	}
	new_str = (char *) malloc(i + 1);
	j = 0;/* Index for new string*/
	k = i - 1;/* Index for s */

	while (k >= 0)
	{
		new_str[j] = s[k];
		j++;
		k--;
	}
	new_str[j] = '\0';
	k = 0;

	while (k < i)
	{
		s[k] = new_str[k];
		k++;
	}
	s[k] = '\0';
}
