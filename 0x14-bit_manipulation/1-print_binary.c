#include "main.h"

/**
 * print_binary - this prints the binary equal of a decimal number
 * @n: it represents number to print in binary
 */
void print_binary(unsigned long int n)
{
	int jess, print = 0;
	unsigned long int value;

	for (jess = 63; jess >= 0; jess--)
	{
		value = n >> jess;

		if (value & 1)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}

