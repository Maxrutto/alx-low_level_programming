#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts binary to number
 * @b: Points to a binary representation
 * Return: The decimal value and 0
 * if no return and NULL 'b' value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res;

	if (b == NULL)
		return (0);

	res = 0;

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		res = (res << 1) + (*b - '0');
		b++;
	}
	_putchar("\n");
	return (res);
}
