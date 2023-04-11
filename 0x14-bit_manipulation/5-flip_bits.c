#include "main.h"

/**
 * flip_bits - this counts the number of bits to change
 * in order to get from one number to another
 * @n: this represents first number
 * @m: m represents the second number
 *
 * Return:it returns number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, index = 0;
	unsigned long int value;
	unsigned long int jess = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		value = jess >> j;
		if (value & 1)
		index++;
	}

	return (jess);
}

