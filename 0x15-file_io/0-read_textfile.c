#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print to STDOUT.
 * @filename: text file being read to STDOUT
 * @letters: number of letters to read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *car;
	ssize_t js;
	ssize_t a;
	ssize_t b;

	js = open(filename, O_RDONLY);
	if (js == -1)
	return (0);
	car = malloc(sizeof(char) * letters);
	b = read(js, car, letters);
	a = write(STDOUT_FILENO, car, b);

	free(car);
	close(js);
	return (a);
}
