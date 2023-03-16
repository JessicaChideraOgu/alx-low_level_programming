#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory space using malloc
 * @b: the bytes to be alocated
 * Return: a pointer to the allocated memory
 * if malloc fails, it exits with a value 98.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
