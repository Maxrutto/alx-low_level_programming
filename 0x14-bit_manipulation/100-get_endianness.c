#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Union: recursion
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	union
	{
		int i;

		char c[sizeof(int)];
	} endian;

	endian.i = 1;

	if (endian.c[0] == 1)
		return (1);
	else
		return (0);
}
