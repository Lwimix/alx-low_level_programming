#include "main.h"

/**
 * _isalpha - checks whether part of the alphabet
 * @c: checked whether alphabet
 *
 * Return: 1 for SUCCESS
 */
int _isalpha(int c)
{
	if(( c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
