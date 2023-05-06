#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary to an unsigned integer
 * @b: Pointer as binary
 *
 * Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int len = strlen(b);
	int i;

	for (i = 0;  i < len; i++)
	{
		res <<= 1;
		if (b[i] == '1')
		{
			res += 1;
		} else
		if (b[i] != '0')
			return (0);
	}

	return (res);
}
