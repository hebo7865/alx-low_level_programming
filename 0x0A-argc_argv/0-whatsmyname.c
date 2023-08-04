#include <stdio.h>
#include "main.h"
/**
  * main - program prints its name
  * @argc: argument counter
  * @argv: argument value
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
