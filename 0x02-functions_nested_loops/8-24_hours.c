#include <stdio.h>
#include "main.h"
/**
  * jack_bauer - print every minute of the day
  * Return: always 0
  */
void jack_bauer(void)
{
	int h, o, m, s;

	for (h = 0; h <= 2; h++)
	{
		for (o = 0; o <= 3; o++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (s = 0; s <= 9; s++)
				{
					_putchar(h);
					_putchar(o);
					_putchar(':');
					_putchar(m);
					_putchar(s);
				}
			}
		}
	}
}
