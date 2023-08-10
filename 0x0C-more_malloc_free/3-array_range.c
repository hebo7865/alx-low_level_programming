#include <stdlib.h>
#include "main.h"
/**
  * array_range - creates an array of integers
  * @min: min array range
  * @max: max array rang
  * Return: always 0
  */
int *array_range(int min, int max)
{
	int i, l;
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	l = max - min + 1;

	p = malloc(sizeof(int) * l);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}
	return (p);
}
