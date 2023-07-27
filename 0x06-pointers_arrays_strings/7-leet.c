#include <stdio.h>
#include "main.h"
/**
  * leet - encodes a string into 1337
  *@c: char input
  * Return: always 0
  */
char *leet(char *c)
{
	int i, t;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (t = 0; t < 10; t++)
		{
			if (c[i] == str1[t])
			{
				c[i] = str2[t];
			}
		}
	}
	return (c);
}
