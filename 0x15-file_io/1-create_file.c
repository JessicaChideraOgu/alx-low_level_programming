#include "main.h"

/**
 * create_file - it creates a file.
 * @filename: It points to the name of the file to create.
 * @text_content: It points to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int js, a, car = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (car = 0; text_content[car];)
		car++;
	}

	js = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(js, text_content, car);

	if (js == -1 || a == -1)
	return (-1);

	close(js);

	return (1);
}
