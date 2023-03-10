#include "main.h"

/**
 * _strcat - put strings together
 * @dest: destination point
 * @src: source string
 *
 * Return: added string
 */
char *_strcat(char *dest, char *src)
{
	char *count = dest;

	while (*count != '\0')
	{
		count++;
	}
	while (*src != '\0')
	{
		*count++ = *src++;
	}
	*count = '\0';
	return (dest);
}
