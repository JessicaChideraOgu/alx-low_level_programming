#include "main.h"

/**
 * get_bit - get_bit returns the value of a bit at an index in a decimal number
 * @n: it reps the number to search
 * @index: represents the index of the bit
 *
 * Return: returns the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}

