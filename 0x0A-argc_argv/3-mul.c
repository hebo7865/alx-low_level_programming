#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * main - multiplies two numbers
  * @argc: argument counter
  * @argv: argument value
  * Return: alwyas 0
  */
int main(int argc, char *argv[])
{
	int sum;

	if (argc > 2)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
