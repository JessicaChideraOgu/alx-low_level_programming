#include "main.h"

/**
 * get_endianness - it checks if a machine is little or big endian
 * Return: 0 for the big, 1 for the little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
