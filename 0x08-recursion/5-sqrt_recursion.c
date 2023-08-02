#include <stdio.h>
#include "main.h"
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: input integer
  * @i: input integer
  * Return: always 0
  */
int sqr(int n, int i);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
  * sqr - search for square root
  * @i: input integer
  * @n: input integer
  * Return: always 0
  */
int sqr(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (sqr(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
