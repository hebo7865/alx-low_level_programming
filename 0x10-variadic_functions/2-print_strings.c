#include "variadic_functions.h"
/**
  * print_strings - prints strings, followed by a new line
  * @separator: to seperate strings
  * @n: number of strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list as;

	va_start(as, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(as, char*);
		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(as);
}
