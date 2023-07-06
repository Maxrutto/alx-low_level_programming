#include "main.h"

/**
 * binary_to_int - Converts binary to number
 * @b: Points to a binary representation
 * Return: The decimal value and 0
 * if no return and NULL 'b' value
 */

unsigned int binary_to_int(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int res = 0;

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		res = (res << 1) + (*b - '0');
		b++;
	}
	return (res);
}
