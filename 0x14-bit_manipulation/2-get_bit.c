#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The unsigned integer to extract the bit from.
 * @index: The index of the bit.
 * Return: The value of the bit at the given
 * index (0 or 1) or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;
	if (index >= sizeof(unsigned int) * 8)
		return (-1);

	mask = 1 << index;
	return ((n & mask) != 0);
}
