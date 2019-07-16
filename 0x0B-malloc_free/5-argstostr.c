#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *perr;
	int x = 0;

	if (ac == 0 || av != NULL)
		return (NULL);

	perr = malloc((x) * sizeof(char));

	if (perr == 0)
		return (perr);
	return (perr);
}
