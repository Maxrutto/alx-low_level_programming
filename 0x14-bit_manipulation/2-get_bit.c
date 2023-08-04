#include "main.h"

/**
 * get_bit - Returns the value of a bit at a
 * given index
 * @n: integer value of the number we want to get the bit
 * value
 * @index: Index of the bit we want to get
 * Return: The bit at index (index)
 * or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(n) * 8;

	unsigned long int mask;

	int bit_value;

	if (index >= bits)
		return (-1);

	mask = 1UL << index;
	bit_value = (n & mask) ? 1 : 0;
	return (bit_value);
}
