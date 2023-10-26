#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
*/
void print_binary(unsigned long int n)
{
	int i, p = 0;

	i = sizeof(n) * 8;
	while (i)
	{
		if (n & 1l << --i)
		{
			_putchar('1');
			p++;
		}
		else if (p)
		{
			_putchar('0');
		}
	if (!p)
	{
		_putchar('0');
	}
	}
}
