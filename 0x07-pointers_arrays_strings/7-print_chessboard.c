nclude "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);
		_putchar('\n');
	}
}
