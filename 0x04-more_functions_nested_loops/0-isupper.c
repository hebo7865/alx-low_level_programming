#include "main.h"
/**
  * _isupper - check if char is uppercase of lowercase
  *@c: character input in ASCII code
  * Return: always 0
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
