#include <stdlib.h>
#include "main.h"
/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: seconed string
  * @n: unsigned integer
  * Return: always 0
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, t = 0, s1len = 0, s2len = 0;

	while (s1 && s1[s1len])
	{
		s1len++;
	}
	while (s2 && s2[s2len])
	{
		s2len++;
	}
	if (n < s2len)
	{
		p = malloc(sizeof(char) * (s1len + n + 1));
	}
	else
	{
		p = malloc(sizeof(char) * (s1len + s2len + 1));
	}
	if (!p)
	{
		return (NULL);
	}
	while (i < s1len)
	{
		p[i] = s1[i];
		i++;
	}
	while (n < s2len && i < (s1len + n))
	{
		p[i++] = s2[t++];
	}
	while (n >= s2len && i < (s1len + s2len))
	{
		p[i++] = s2[t++];
	}
	p[i] = '\0';
	return (p);
}
