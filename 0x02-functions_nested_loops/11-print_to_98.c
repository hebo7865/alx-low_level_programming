#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - print from input num
  *@n: input integer
  * Return: always 0
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (num = n; num > 98; num--)
		{
			printf("%i, ", num);
		}
	}
		else
		{
		for (num = n; num < 98; num++)
		{
			printf("%i, ", num);
		}
		}
		printf("98\n");
}
