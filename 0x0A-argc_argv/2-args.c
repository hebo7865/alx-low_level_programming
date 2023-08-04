#include <stdio.h>
#include "main.h"
/**
  * main - prints all arguments it receives
  * @argc: argument count
  * @argv: argument value
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		while (argc--)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
