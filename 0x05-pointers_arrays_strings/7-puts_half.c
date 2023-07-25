#include <stdio.h>
#include "main.h"
/**
  * puts_half - print half of string
  *@str: string oinput
  */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	i++;
	for (i /= 2; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
