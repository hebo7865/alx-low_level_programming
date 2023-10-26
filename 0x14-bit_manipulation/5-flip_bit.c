#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first integr
 * @m: second integr
 *
 * Return: number of bit to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int count = n ^ m;

	while (count)
	{
		if (count & 1uL)
		{
			count++;
		}
		count = count >> 1;
	}
	return (count);
}
