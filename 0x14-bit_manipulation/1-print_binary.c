#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: An unsigned long integer
 *
 * Return: Null
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar(n & 1 ? '1' : '0');
}
