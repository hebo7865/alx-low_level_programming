#include <stdio.h>
#include "main.h"
/**
  * print_diagonal - print line for n value
  *@n: integger input
  * Return: always 0
  */
void print_diagonal(int n)
{
	int l, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l <= n; l++)
		{
			for (s = 0; s <= l; s++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
