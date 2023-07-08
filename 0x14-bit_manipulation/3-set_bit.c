#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1
 * at a given index
 * @n: Pointer to thr unsigned integer that is being set
 * @index: The index of the bit
 *
 * Return: 1 if it worked and -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	mask = 1 << index;
	*n |= mask;
	return (1);
}
