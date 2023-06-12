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
	int n;
	for (n = 1; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
		return(0);
}
