#include <stdio.h>
#include "main.h"
/**
  * times_table -  prints the 9 times table
  * Return: always 0
  */
void times_table(void)
{
	int i, m, s;

	for (i = 0; i <= 9; i++)
	{
		for (m = 0; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			s = (i * m);

			if (s  <= 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((s / 10) + 48);
			}
			_putchar((s % 10) + 48);
		}
		_putchar('\n');
	}
}
