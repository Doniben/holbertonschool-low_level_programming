#include "holberton.h"

/**
 * create_file - Function to create a file
 * @filename: file to create
 * @text_content: file to
 * Return: 1 on Success.
 */

int create_file(const char *filename, char * text_content)
{
	int fd, c = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[c])
		c++;
	write(fd, text_content, c);
	close(fd);
	return (1);
}
