#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * main - adds positive numbers
  * @argc: argument counter
  * @argv: argument value
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *p;

	while (--argc)
	{
		for (p = argv[argc]; *p; p++)
		{
			if (*p < '0' || *p > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
