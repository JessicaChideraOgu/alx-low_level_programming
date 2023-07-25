#include "main.h"

/**
 *  * binary_to_uint - converts a binary number to unsigned int
 *   * @b: string containing the binary number
 *    *
 *     * Return: the converted number
 *      */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int jess = 0;

	if (!b)
	return (0);

	for (a = 0; b[a]; a++)
		{
			if (b[a] < '0' || b[a] > '1')
			return (0);
			jess = 2 * jess + (b[a] - '0');
		}

	return (jess);
}

