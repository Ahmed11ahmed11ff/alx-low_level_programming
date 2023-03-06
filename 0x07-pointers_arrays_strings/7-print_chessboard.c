/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to the chessboard array.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0;a[row][7]; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
			_puchar('\n');
	}
}
