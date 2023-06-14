#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - its duplicate to new memory space location
 * @str: character
 * Return: value 0
 */

char *_strdup(char *str)
{
	char *jess;
	int a, b = 0;

	if (str == NULL)
	return (NULL);
	a = 0;
	while (str[a] != '\0')
	a++;

	jess = malloc(sizeof(char) * (a + 1));

	if (jess == NULL)
	return (NULL);

	for (b = 0; str[b]; b++)
	jess[b] = str[b];

	return (jess);
}
