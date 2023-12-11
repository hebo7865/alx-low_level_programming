#include <stdio.h>
#include "main.h"
/**
  * _strpbrk - searches a string for any of a set of bytes
  *@s: string input
  *@accept: set of bytes
  * Return: always 0
  */
char *_strpbrk(char *s, char *accept)
{
	int i, t;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		t = 0;
		while (accept[t] != '\0')
		{
			if (accept[t] == s[i])
			{
				p = &s[i];
				return (p);
			}
			t++;
		}
		i++;
	}
	return (0);
}
