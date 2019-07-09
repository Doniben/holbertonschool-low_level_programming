#include "holberton.h"

/**
 * *_strchr - function to locate a character.
 * @s: array
 * @c: value
 * Return: to the array or to 0.
 */
char *_strchr(char *s, char c)
{
	unsigned int d;

	for (d = 0 ; s[d] ; ++d)
	{
		if (*(s + d) == c)
			return (s + d);
		if (!*s)
			return (0);
	}
	return (0);
}

