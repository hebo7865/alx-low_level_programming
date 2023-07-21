#include <stdio.h>
#include "main.h"
/**
  * print_square - print a square of hash
  *@size: size of square
  * Return: always 0
  */
void print_square(int size)
{
	int l, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (l = 1; l <= size; l++)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	}
}
