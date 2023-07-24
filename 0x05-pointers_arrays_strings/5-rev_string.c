#include <stdio.h>
#include "main.h"
/**
  * rev_string - reverse string content
  *@s: string input
  */
void rev_string(char *s)
{
	int i, l, swap;

	for (l = 0; s[l] != '\0'; l++)
	{
		;
	}
	for (i = 0; i < l / 2; i++)
	{
		swap = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = swap;
	}
}
