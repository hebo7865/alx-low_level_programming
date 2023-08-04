#include <stdio.h>
/**
  * main - print all natural number that multiblies of 3 or 5
  * Return: always 0
  */
int main(void)
{
	int i, sum, sum3, sum5;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		}
		else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
		sum = sum3 + sum5;
		printf("%i\n", sum);
		return (0);
}
