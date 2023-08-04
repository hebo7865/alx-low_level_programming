#include <stdio.h>
#include "main.h"
/**
  * _memset - fills memory with a constant byte
  * @s: input char
  * @b: input char
  * @n: input integer
  * Return: always 0
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ui;

	for (ui = 0; n > 0; ui++, n--)
	{
		s[ui] = b;
	}
	return (s);
}
