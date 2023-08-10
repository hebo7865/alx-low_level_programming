#include <stdlib.h>
#include "main.h"
/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: width of array
  * @height: height of array
  * Return: always 0
  */
int **alloc_grid(int width, int height)
{
	int **p, i, s;

	p = malloc(sizeof(*p) * height);
	if (width <= 0 || height <= 0 || p == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(sizeof(int) * width);
			if (p[i] == 0)
			{
				while (i--)
				{
					free(p[i]);
				}
				free(p);
				return (NULL);
			}
			for (s = 0; s < width; s++)
			{
				p[i][s] = 0;
			}
		}
	}
	return (p);
}
