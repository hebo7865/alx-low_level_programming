#include <stdlib.h>
#include "main.h"
/**
  * _strdup - returns a pointer to a newly
  * allocated space in memory
  * @str: string will return
  * Return: always 0
  */
char *_strdup(char *str)
{
	int i, size;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}

	p = malloc(size * sizeof(*str) + 1);

	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = str[i];
		}
	}
	return (p);
}
