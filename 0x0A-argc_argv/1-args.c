#include <stdio.h>
#include "main.h"
/**
  * main - prints the number of arguments passed into it
  * @argc: argument counter
  * @argv: argument value
  * Return: always 0
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}