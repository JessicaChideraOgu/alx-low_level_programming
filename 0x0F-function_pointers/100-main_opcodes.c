#include <stdio.h>
#include <stdlib.h>

/**
 * main - it prints its own opcodes
 * @argc: the number of arguments
 *   @argv: the array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int jess, a;
	char *vin;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	jess = atoi(argv[1]);

	if (jess < 0)
	{
	printf("Error\n");
		exit(2);
	}

	vin = (char *)main;

	for (a = 0; a < jess; a++)
	{
	if (a == jess - 1)
	{
	printf("%02hhx\n", vin[a]);
	break;
	}
		printf("%02hhx ", vin[a]);
	}
	return (0);
}
