#include <stdio.h>
#include "main.h"

/**
 * main - The actual program
 * @argc: The number of arguments
 * @argv: The array of strings
 * return - Returns 0.
 *
 */
int main(int argc, char *argv[])
{
	(void) argv; /*not included*/
	printf("%d\n", argc - 1);

	return (0);
}
