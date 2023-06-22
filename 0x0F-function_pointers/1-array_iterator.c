#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - it prints each array element on a newline
 * @array: the array
 * @size: size of element to be printed
 * @action: pointer to be printed
 * Return: null.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
