#include "main.h"

/**
 * clear_bit - this sets the value of a given bit to 0
 * @n: this represents pointer to the number to change
 * @index: this represents index of the bit to clear
 *
 * Return: returns 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
