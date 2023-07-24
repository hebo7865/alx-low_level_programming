#include <stdio.h>
#include "main.h"
/**
  * swap_int - swap two integers value
  *@a: integer input
  *@b: integer input
  */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
