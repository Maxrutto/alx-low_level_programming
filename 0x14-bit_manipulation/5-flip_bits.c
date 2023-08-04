#include "main.h"

/**
 * flip_bits - flipping from one no. to another
 * @n: Integer being flipped
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;

	unsigned int count = 0;

	while (xor_res)
	{
		count += xor_res & 1;
		xor_res >>= 1;
	}

	return (count);
}
