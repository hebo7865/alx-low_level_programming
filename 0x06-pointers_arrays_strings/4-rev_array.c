#include <stdio.h>
#include "main.h"
/**
  * reverse_array - reverses the content of an array of integers
  *@a: array input
  *@n: integer input
  */
void reverse_array(int *a, int n)
{
	int i, l, swap;

	for (i = 0, l = (n - 1); i < l; i++, l--)
	{
		swap = a[i];
		a[i] = a[l];
		a[l] = swap;
	}
}
