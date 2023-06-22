#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - it prints the result of operations.
 * @argc: The number of arguments supplied.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int jess1, jess2;
	char *vin;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	jess1 = atoi(argv[1]);
	vin = argv[2];
	jess2 = atoi(argv[3]);

	if (get_op_func(vin) == NULL || vin[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*vin == '/' && jess2 == 0) ||
		(*vin == '%' && jess2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(vin)(jess1, jess2));

	return (0);
}
