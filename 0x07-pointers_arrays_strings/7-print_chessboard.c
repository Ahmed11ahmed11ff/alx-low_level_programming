#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to the chessboard array.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int colm;

	for (row = 0; row < 8; row++)
	{
		for (colm = 0; colm < 8; colm++)
		{
			_putchar(a[row][colm]);
			if (colm == 7)
				_putchar('\n');
		}
	}
}
