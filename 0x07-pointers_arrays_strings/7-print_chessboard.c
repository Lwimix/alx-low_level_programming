#include "main.h"

/**
 * print_chessboard - print a set chessboard
 * @a: set board array
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
	}
}
