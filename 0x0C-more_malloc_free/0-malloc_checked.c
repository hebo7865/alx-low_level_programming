#include <stdlib.h>
#include "main.h"
/**
  * malloc_checked - allocates memory using malloc
  * @b: unsigned integer
  * Return: always 0
  */
void *malloc_checked(unsigned int b)
{
	int *p  = malloc(b);

	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
