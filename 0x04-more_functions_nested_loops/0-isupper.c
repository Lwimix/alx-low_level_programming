#include "main.h"

/**
 * _isupper - checks for uppercase char
 * @c: checked character
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		return 1;
	}
	else
	{
		return 0;
	}
}
