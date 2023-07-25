#include <stdio.h>
#include "main.h"
/**
  * print_array - print and array of integer input
  *@a: integer input represent an array
  *@n: integer input represent number of element
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
