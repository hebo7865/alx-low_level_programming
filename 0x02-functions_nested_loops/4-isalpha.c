#include <stdio.h>
#include "main.h"
/**
  * _isalpha - check if c is character
  * @c: is a chracter in ASCII code
  * Return: return 1 if character 0 if not
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
