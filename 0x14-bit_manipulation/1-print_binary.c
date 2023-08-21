#include "main.h"

/**
 * print_binary - prints the equivalent of a decimal number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int a, jess = 0;
	unsigned long int dec;

	for (a = 63; a >= 0; a--)
	{
	dec = n >> a;

	if (dec & 1)
	{
		_putchar('1');
		jess++;
	}
		else if (jess)
		_putchar('0');
	}
	if (!jess)
	_putchar('0');
}
