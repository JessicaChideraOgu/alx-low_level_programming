#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file that will be printed to STDOUT.
 * @filename: the text file to be read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *jess;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	jess = malloc(sizeof(char) * letters);
	t = read(fd, jess, letters);
	w = write(STDOUT_FILENO, jess, t);
	free(jess);
	close(fd);
	return (w);
}

