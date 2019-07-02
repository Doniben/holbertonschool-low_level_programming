#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: Character who receives
 * Return: On success.
 *
 */

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c))
		c++;
	return (c);
}
