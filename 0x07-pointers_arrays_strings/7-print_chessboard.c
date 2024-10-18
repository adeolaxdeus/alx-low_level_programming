#include "main.h"
/**
 * print_chessboard - Prints the chess board
 * @a: Pointer to chess board
 *
 */
void print_chessboard(char (*a)[8])
{
	int col = 0;
	int row;

	while (col < 8)
	{
		row = 0;
		while (row < 8)
		{
			_putchar(a[col][row]);
			row++;
		}
		_putchar('\n');
		col++;
	}
}
