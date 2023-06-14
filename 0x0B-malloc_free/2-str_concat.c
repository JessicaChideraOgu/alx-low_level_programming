#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: Return a conc of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ogu;
	int a, je;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	a = je = 0;
	while (s1[a] != '\0')
	a++;
	while (s2[je] != '\0')
	je++;
	ogu = malloc(sizeof(char) * (a + je + 1));

	if (ogu == NULL)
	return (NULL);
	a = je = 0;
	while (s1[a] != '\0')
	{
		ogu[a] = s1[a];
		a++;
	}

	while (s2[je] != '\0')
	{
		ogu[a] = s2[je];
		a++, je++;
	}
	ogu[a] = '\0';
	return (ogu);
}
