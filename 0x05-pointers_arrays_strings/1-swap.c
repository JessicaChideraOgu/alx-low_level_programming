#include <stdio.h>

/**
 * swap_int - Swaps the value of the two integers
 * @a: The first integers to be swapped
 * @b: The second integer to be swapped
 * Return: Nothing
 */

void swap_int(int *a, int *b)
/* The function that swaps the the value of the two intergers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
