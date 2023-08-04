#include <stdio.h>
#include "main.h"
/**
  * _strncat -  concatenates two strings
  *@dest: string input
  *@src: string input
  *@n: integer input
  * Return: always 0
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, t;

	while (dest[i])
	{
		i++;
	}
	for (t = 0; t < n && src[t] != '\0'; t++)
	{
		dest[i + t] = src[t];
	}
	dest[i + t] = '\0';
	return (dest);
}
