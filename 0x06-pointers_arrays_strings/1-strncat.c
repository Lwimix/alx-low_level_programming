#include "main.h"
/*#include <stdio.h>*/

/**
 * _strcat - put strings together
 * @dest: destination point
 * @src: source string
 *
 * Return: added string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *count = dest;
/*	printf("%d is size of dest\n", sizeof(dest));
	printf("%d is size of src\n", sizeof(src));
	printf("%d is size of n\n", sizeof(n));
*/
	while (*count != '\0')
	{
		count++;
	}
	while (i < n && *src != '\0')
	{
		*count++ = *src++;
		n--;
	}
	*count = '\0';
	return (dest);
}
