#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Create a file with a specified name and content
 * @filename: Name of the file to create
 * @text_content: Content to read into the file
 *
 * Return: 1 on success, -1 on any failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREATY | o_TRUNC | O_WRONLY, 0600);
	if (file == -1)
		return (-1);

	while (text_content[i])
		i++;

	if (text_content == NULL)
	{
		close(file);
		return (-1);
	}
	else
	{
		write(file, text_content, i);
	}

	close(file);
	return (1);
}
