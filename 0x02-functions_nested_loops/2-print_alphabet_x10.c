#include <stdio.h>
#include "main.h"
/**
  * print_alphabet_x10 - print the alphabet 10 times
  * Return: return 0
  */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
