#include <stdlib.h>
#include "main.h"
/**
  * argstostr - concatenates all the arguments of your program
  * @ac: integer input
  * @av: pointer array
  * Return: always 0
  */
char *argstostr(int ac, char **av)
{
	int i, s, t = 0, l = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (s = 0; av[i][s]; s++)
		{
			l++;
		}
	}
	l += ac;

	p = malloc(sizeof(char) * l + 1);
	if (p   == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (s = 0; av[i][s]; s++)
		{
			p[t] = av[i][s];
			t++;
		}
		if (p[t] == '\0')
		{
			p[t++] = '\n';
		}
	}
	return (p);
}
