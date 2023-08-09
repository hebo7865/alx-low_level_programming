#include <stdlib.h>
#include "main.h"
/**
  * create_array - creates an array of chars
  * @size: size of an array
  * @c: chars will be stored in the array
  * Return: always 0
  */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
	{
		return (0);
	}
	while (size--)
	{
		p[size] = c;
	}
	return (p);
}
