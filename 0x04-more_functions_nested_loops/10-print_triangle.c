#include <stdio.h>
#include "main.h"
/**
  * print_triangle - print triangle
  *@size: input integer define the size of triangle
  * Return: always 0
  */
void print_triangle(int size)
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
				if ((i + l) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
