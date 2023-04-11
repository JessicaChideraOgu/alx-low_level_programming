#include "main.h"

/**
 * binary_to_uint - this will converts a binary number to an unsigned int
 * @b: the string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int des;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (des = 0; b[des]; des++)
	{
		if (b[des] < '0' || b[des] > '1')
			return (0);
		decimal = 2 * decimal + (b[des] - '0');
	}

	return (decimal);
}

