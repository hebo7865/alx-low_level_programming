#include "variadic_functions.h"
/**
  * print_numbers - prints numbers, followed by a new line
  * @separator: separator to seprate numbers
  * @n: numbers to print
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list an;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(an, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(an, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(an);
}
