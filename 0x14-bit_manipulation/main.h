#ifndef _MAIN_
#define _MAIN_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - prints the binary representation of a number
 */
void print_binary(unsigned long int n);

int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
