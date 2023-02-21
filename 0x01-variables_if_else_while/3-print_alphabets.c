#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry piont
 * Return: 0
 *
 */

int main(void)

{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
