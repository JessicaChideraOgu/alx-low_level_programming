#include "main.h"

/**
 * append_text_to_file - will append text at the end of a file.
 * @filename: Is a pointer to the name of the file.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: If the function fails or the filename is NULL - -1.
 * If the file does not exist the user is restricted write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int jess, james, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	jess = open(filename, O_WRONLY | O_APPEND);
	james = write(jess, text_content, len);

	if (jess == -1 || james == -1)
		return (-1);

	close(jess);

	return (1);
}

