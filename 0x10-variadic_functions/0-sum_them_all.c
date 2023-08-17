#include "variadic_functions.h"
/**
  * sum_them_all - sum of all its parameters
  * @n: integer input
  * Return: always 0
  */
int sum_them_all(const unsigned int n, ...)
{
	int sm = 0, i = n;
	va_list av;

	if (n == 0)
	{
		return (0);
	}
	va_start(av, n);
	while (i--)
	{
		sm += va_arg(av, int);
	}
	va_end(av);
	return (sm);
}
