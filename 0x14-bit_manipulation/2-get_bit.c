#include "main.h"

/**
 * get_bit - it returns the value in a decimal number
 * @n: number to search for
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
	return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
