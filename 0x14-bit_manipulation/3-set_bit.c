#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: Pointer to integer representing the number being set
 * @index: Index of the bits set
 * Return: 1 on success -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(n) * 8;

	unsigned long int mask;

	if (index >= bits)
		return (-1);

	mask = 1UL << index;
	*n |= mask;
	return (1);
}
