#include <stdio.h>
#include "main.h"
/**
  * int _strspn -  gets the length of a prefix substring
  * @s: substring input
  * @accept: lenght of substring
  * Return: always 0
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ui, uti;

	for (ui = 0; s[ui] != '\0'; ui++)
	{
		for (uti = 0; accept[uti] != s[ui]; uti++)
		{
			if (accept[uti] == '\0')
			{
				return (ui);
			}
		}
	}
	return (ui);
}
