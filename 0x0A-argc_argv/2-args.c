#include <stdio.h>
#include "main.h"

/**
 * main - the main program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return - Returns 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
