#include <stdio.h>
#include "main.h"
/**
  * _strchr -  locates a character in a string
  *@s: string that will be searched
  *@c: character will searche for
  * Return: always 0
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
