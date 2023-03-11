#include <stdio.h>
#include "main.h"

/**
 * main - prints all argument it recieves
 * @argc: numbers of arguments
 * @argv: arrays of arguments
 * Return: 0.
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
