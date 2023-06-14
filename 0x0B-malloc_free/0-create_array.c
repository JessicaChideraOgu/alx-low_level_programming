#include "main.h"
#include <stdlib.h>
/**
 * create_array - create the array and assign a character c
 * @size: the size of the array
 * @c: the character to be assigned
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
	return (NULL);

	for (a = 0; a < size; a++)
	ptr[a] = c;
	return (ptr);
}
