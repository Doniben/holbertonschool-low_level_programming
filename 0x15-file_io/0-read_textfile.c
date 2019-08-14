#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read and print
 * @letters: number of letters it should read and print
 * Return: to the length of characters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_to_op, _read, _write;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
/* Open */
	file_to_op = open(filename, O_RDONLY);
	if (file_to_op == -1)
		return (0);

	/*buf[letters] = '\0';*/
	if (buf == NULL)
		return (0);

/* Read */
	_read = read(file_to_op, buf, letters);
	if (_read == -1)
		return (0);

/* Write */
	_write = write(STDOUT_FILENO, buf, _read);
		if (_write == -1)
			return (0);

	close(file_to_op);
	return (_read);
}
