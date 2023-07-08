#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: The first number
 * @m: The second number we get from flipping
 *
 * Return: The number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorRes;

	unsigned int count;

	xorRes = n ^ m;
	count = 0;

	while (xorRes > 0)
	{
		count += xorRes & 1;
		xorRes >>= 1;
	}

	return (count);
}
