#include "holberton.h"

/**
 * function that appends text at the end of a file.
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, c = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
