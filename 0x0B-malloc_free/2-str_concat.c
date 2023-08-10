#include <stdlib.h>
#include "main.h"
/**
  * str_concat - concatenate two strings
  * @s1: first string
  * @s2: string that will be concatenated
  * Return: always 0
  */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, s = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = s = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[s] != '\0')
	{
		s++;
	}
	p = malloc((i + s) * sizeof(char) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	i = s = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[s] != '\0')
	{
		p[i] = s2[s];
		i++, s++;
	}
	p[i] = '\0';
	return (p);
}
