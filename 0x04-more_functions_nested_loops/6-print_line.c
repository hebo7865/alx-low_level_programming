#include <stdio.h>
#include "main.h"
/**
  * print_line - print line for n value
  *@n: integger input
  * Return: always 0
  */
void print_line(int n)
{
	int l;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
