#include "main.h"

/**
 * print_binary - converts a decimal number to binary
 * and prints the result
 * @n: The decimal number to convert
 */
void print_binary(unsigned long int n)
{
	int bin, placevalue;

	bin = 0;

	placevalue = 1;

	while (n > 0)
	{
		int rem;

		rem = n & 1;
		bin += rem * placevalue;
		n = (n - rem) >> 1;
		placevalue *= 10;
	}

	if (bin == 0)
		_putchar('0');
	else
	{
		while (bin > 0)
		{
			int digit;

			digit = bin & 1;
			_putchar(digit + '0');
			bin = (bin - digit) >> 1;
		}
	}

	_putchar('\n');
}
