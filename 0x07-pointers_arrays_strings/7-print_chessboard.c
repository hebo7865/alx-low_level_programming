#include <stdio.h>
#include "main.h"
/**
  * print_chessboard - prints the chessboard
  * @a: array input
  */
void print_chessboard(char (*a)[8])
{
	int i, t;

	for (i = 0; i < 8; i++)
	{
		for (t = 0; t < 8; t++)
		{
			_putchar(a[i][t]);
		}
		_putchar('\n');
	}
}
