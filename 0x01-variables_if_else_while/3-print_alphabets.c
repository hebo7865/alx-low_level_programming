#include <stdio.h>
/**
  * main - print the alphabet
  * Return: return 0
  */
int main(void)
{
	int s = 96;
	int c = 64;

	while (s < 122)
	{
		s++;
		putchar(s);
	}
	while (c < 90)
	{
		c++;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
