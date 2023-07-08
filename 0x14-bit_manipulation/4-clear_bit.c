#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets a bit value to 0
 * at a given index.
 * @n: Pointer to the given number containing
 * the bits
 * @index: The index of the bit being set
 * to zero
 *
 * Return: 1 if it worked and -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	mask = ~(1 << index);
	*n &= mask;
	return (1);
}
