#include <stdio.h>
#include "main.h"
/**
  * set_string - sets the value of a pointer to a char
  * @s: string pointer of pointer
  * @to: char pointer
  */
void set_string(char **s, char *to)
{
	*s = to;
}
