#include <stdio.h>
#include "main.h"
/**
  * print_sign - check if input is greater that, less than or equal to 0
  * @n: input integer
  * Return: always 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
