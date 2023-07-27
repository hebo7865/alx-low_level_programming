#include <stdio.h>
#include "main.h"
/**
  * print_number - print an integer
  *@n: integer input
  */
void print_number(int n)
{
	unsigned int i1;

	i1 = n;

	if (n < 0)
	{
		_putchar('-');
		i1 = -n;
	}

	if (i1 / 10 != 0)
	{
		print_number(i1 / 10);
	}
	_putchar((i1 % 10) + '0');
}
