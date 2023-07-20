#include <stdio.h>
#include "main.h"
/**
  * more_numbers - print numbers from 0 to 14
  * Return: always 0
  */
void more_numbers(void)
{
	int l, i;

	for (l = 0; l <= 9; l++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
