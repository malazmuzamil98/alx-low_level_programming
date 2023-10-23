#include "main.h"
/**
  * print_chessboard - a function that prints the chessboard
  *
  * @a: the chessboard array
  *
  * Return: Nothing
  */
void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (a[i][7])
	{
		int j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
