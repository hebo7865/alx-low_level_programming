#include <stdlib.h>
#include "main.h"
/**
  * _mset - fills memory with byte
  * @p: pointer of constant
  * @c: char to copy
  * @n: max byte to use
  * Return: always 0
  */
char *_mset(char *p, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = c;
	}
	return (p);
}

/**
  * _calloc -  allocates memory for an array, using malloc
  * @nmemb: input integer
  * @size: size of an array
  * Return: always 0
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(size * nmemb);
	if (s == NULL)
	{
		return (NULL);
	}
	_mset(s, 0, size * nmemb);
	return (s);
}
