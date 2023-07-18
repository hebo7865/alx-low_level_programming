#include <stdio.h>
#include "main.h"
/**
  * jack_bauer - print every minute of the day
  * Return: always 0
  */
void jack_bauer(void)
{
	int h, o, m, s;

	for (h = 48; h <= 50; h++)
	{
		for (o = 48; o <= 51; o++)
		{
			for (m = 48; m <= 53; m++)
			{
				for (s = 48; s <= 57; s++)
				{
					_putchar(h);
					_putchar(o);
					_putchar(':');
					_putchar(m);
					_putchar(s);
					_putchar('\n');
				}
			}
		}
	}
}
