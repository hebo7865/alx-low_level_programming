#include <stdio.h>
#include "main.h"
/**
  * print_most_numbers - print the digits except 2 & 4
  * Return: always 0
  */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
