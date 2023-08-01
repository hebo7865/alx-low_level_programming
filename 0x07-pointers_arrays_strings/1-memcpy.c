#include <stdio.h>
#include "main.h"
/**
  * _memcpy - copies memory area
  *@dest: copy destination
  *@src: input wanted to be copied
  *@n: input integer
  * Return: always 0
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ui;

	for (ui = 0; ui < n; ui++)
	{
		dest[ui] = src[ui];
	}
	return (dest);
}
