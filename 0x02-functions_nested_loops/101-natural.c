#include <stdio.h>
/**
  * main - print all natural number that multiblies of 3 or 5
  * Return: always 0
  */
int main(void)
{
	int i, s;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			s += i;
		}
		printf("%i\n", s);
		return (0);
	}
}
