#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *value;

	value = malloc(sizeof(char) * 1024);

	if (value == NULL)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (value);
}

/**
 * close_file - this closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - it copies the contents of a file into another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: the array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int top, bottom, b, d;
	char *value;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	value = create_buffer(argv[2]);
	top = open(argv[1], O_RDONLY);
	b = read(top, value, 1024);
	bottom = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (top == -1 || b == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
		free(value);
		exit(98);
	}

	d = write(from, value, b);
	if (bottom == -1 || b == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
		free(value);
		exit(99);
	}

	b = read(top, value, 1024);
	bottom = open(argv[2], O_WRONLY | O_APPEND);

	} while (b > 0);

	free(value);
	close_file(top);
	close_file(bottom);

	return (0);
}
