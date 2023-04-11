#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - It allocates 1024 bytes for a particular buffer.
 * @file: The name of the file the buffer is storing character for.
 *
 * Return: It returns a pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *jess;

	jess = malloc(sizeof(char) * 1024);

	if (jess == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (jess);
}

/**
 * close_file - it closes the file descriptors.
 * @fd: The file descriptor that is to be closed.
 */
void close_file(int fd)
{
	int j;

	j = close(fd);

	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - It copies the contents of a file to another file.
 * @argc: This is the number of arguments supplied to the program.
 * @argv: Represents an array of pointers to the arguments.
 *
 * Return: Returns 0 on success.
 *
 * Description: If the argument count is not correct, exit code 97.
 *              If file_from does not exist or cannot be read, exit code 98.
 *              If file_to cannot be created or written to, exit code 99.
 *              If file_to or file_from cannot be closed, exit code 100.
 */
int main(int argc, char *argv[])
{
	int work, rest, c, y;
	char *jess;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	jess = create_buffer(argv[2]);
	work = open(argv[1], O_RDONLY);
	c = read(work, jess, 1024);
	rest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (work == -1 || c == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(jess);
			exit(98);
		}

		y = write(rest, jess, c);
		if (rest == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(jess);
			exit(99);
		}

		c = read(work, jess, 1024);
		rest = open(argv[2], O_WRONLY | O_APPEND);

	}

	while (c > 0);

	free(jess);
	close_file(work);
	close_file(rest);

	return (0);
}

