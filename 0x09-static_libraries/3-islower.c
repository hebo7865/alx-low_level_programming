#include <stdio.h>
#include "main.h"
/**
  * _islower - check if the character is lowercase
  * @c: is a character in ASCII code
  * Return: always 0
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
