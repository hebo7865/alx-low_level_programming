#include <stdio.h>
#include "main.h"
/**
  * _strlen - print the srting length
  *@s: string input
  * Return: always 0
  */
int _strlen(char *s)
{
	int sl;

	for (sl = 0; *s != '\0'; s++)
	{
		sl++;
	}
	return (sl);
}
