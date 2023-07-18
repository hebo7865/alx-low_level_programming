#include <stdio.h>
#include "main.h"
/**
  * print_last_digit - print the last digit
  * @i: an integer
  * Return: always 0
  */
int print_last_digit(int i)
{
	int lastdig;

	lastdig = i % 10;
	if (lastdig < 0)
	{
		_putchar(-lastdig + 48);
		return (-lastdig);
	}
	else
	{
		_putchar(lastdig + 48);
		return (lastdig);
	}
}
