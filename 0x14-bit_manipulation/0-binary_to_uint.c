#include "main.h"

/**
 * binary_to_uint - Converts binary number to an unsigned int
 * @b: String of binary digits
 * Return: The converted no.
 * 0 if b is NULL or there are more than
 * 1 chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	int i;

	char ch;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		ch = b[i];
		if (ch == '0' || ch == '1')
			res = res * 2 + (ch - '0');
		else
			return (0);
	}

	return (res);
}
