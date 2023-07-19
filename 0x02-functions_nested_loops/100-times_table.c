#include <stdio.h>
#include "main.h"
/**
  * print_times_table - print the input number times table
  *@n: an input integer
  * Return: always 0
  */
void print_times_table(int n)
{
	int i, m, s;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				s = (i * m);

				if (s <= 9)
					_putchar(' ');
				if (s <= 99)
					_putchar(' ');
				if (s >= 100)
				{
					_putchar((s / 100) + 48);
					_putchar((s / 10) % 10 + 48);
				}
				else if (s <= 99 && s >= 10)
				{
					_putchar((s / 10) + 48);
				}
				_putchar((s % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

