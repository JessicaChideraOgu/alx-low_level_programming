#include "function_pointers.h"
/**
 * int_index - it returns index place if comparison = true, else -1
 * @array: array of the program
 * @size: the size of elements in array
 * @cmp: the pointer to function in main
 * Return: 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		return (a);
	}
	return (-1);
}
