#include "main.h"

/**
 * print_binary - Prints binary rep of a number
 * @n: The unsigned long integer being converted
 * Return: VOID.
 */
void print_binary(unsigned long int n)
{
	int i, mask, bits = sizeof(n) * 8;

	for (i = bits - 1; i >=0; i--)
	{
		mask = 1UL << i;

		if ((n & mask) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
