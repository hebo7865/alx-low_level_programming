#include <stdio.h>
/**
  * main - print base 16 numbers
  * Return: return 0
  */
int main(void)
{
	int i = 48;
	int c = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (c <= 102)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
