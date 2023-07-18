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
		for (o = 0; o <= 9; o++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (s = 0; s <= 9; s++)
				{
					if (h >= 2 && o >= 4)
						break;
					_putchar(h + 48);
					_putchar(o + 48);
					_putchar(58);
					_putchar(m + 48);
					_putchar(s + 48);
					_putchar('\n');
				}
			}
		}
	}
}
