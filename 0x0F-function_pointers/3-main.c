#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
  * main - performs simple operations
  * @argc: number of argument
  * @argv: argument value
  * Return: always 0
  */
int main(int argc, char **argv)
{
	int i, n;
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	n = atoi(argv[3]);
	p = argv[2];

	if (get_op_func(p) == NULL || p[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*p == '/' && n == 0) || (*p == '%' && n == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(p)(i, n));
	return (0);
}
