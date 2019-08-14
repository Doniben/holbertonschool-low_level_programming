#include "holberton.h"

/**
 * create_file - Function to create a file
 * @filename: file to create
 * @text_content: file to
 * Return: 1 on Success.
 */

int create_file(const char *filename, char * text_content)
{
	int fd;
	char *buf = malloc(sizeof(char) * text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (buf == NULL)
		text_content = "";
	write(STDOUT_FILENO, buf, text_content);
	close(fd);
	return (1);
}
