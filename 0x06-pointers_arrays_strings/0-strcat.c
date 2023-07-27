#include <stdio.h>
#include "main.h"
/**
  * _strcat - concatenates two strings
  *@src: input string
  *@dest: input string
  * Return: always 0
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, t;

	while (dest[i])
	{
		i++;
	}
	for (t = 0; src[t]; t++)
	{
		dest[i++] = src[t];
	}
	return (dest);
}
