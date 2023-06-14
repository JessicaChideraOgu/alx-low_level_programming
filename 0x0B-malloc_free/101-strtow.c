#include <stdlib.h>
#include "main.h"

/**
 *count_word - counts the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int jess, n, o;

	jess = 0;

	o = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == ' ')
		jess = 0;
		else if (jess == 0)
	{
		jess = 1;
		o++;
	}
	}

	return (o);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **value, *dex;
	int a, b = 0, jay = 0, sow, c = 0, alx, last;

	while (*(str + jay))
	jay++;
	sow = count_word(str);
	if (sow == 0)
	return (NULL);

	value = (char **) malloc(sizeof(char *) * (sow + 1));
	if (value == NULL)
	return (NULL);

	for (a = 0; a <= jay; a++)
	{
	if (str[a] == ' ' || str[a] == '\0')
	{
		if (c)
	{
		last = a;
		dex = (char *) malloc(sizeof(char) * (c + 1));
		if (dex == NULL)
		return (NULL);
		while (alx < last)
		*dex++ = str[alx++];
		*dex = '\0';
		value[b] = dex - c;
		b++;
		c = 0;
	}
	}
		else if (c++ == 0)
		alx = a;
	}

	value[b] = NULL;

	return (value);
}
