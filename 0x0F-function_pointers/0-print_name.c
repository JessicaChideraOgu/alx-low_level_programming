#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - this prints name using a pointer to function
 * @name: the string to be added
 * @f: the pointer to the function
 * Return: null.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
