#include "main.h"

/**
 * flip_bits - it counts the number of bits to be changed
 * @n: the first number
 * @m: the second number
 *
 * Return: it returns the number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, jess = 0;
	unsigned long int dec;
	unsigned long int word = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		dec = word >> a;
		if (dec & 1)
		jess++;
	}

	return (jess);
}
